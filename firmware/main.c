//---------------------------------------------------------------------------------
// 6-channel speaker selector - STC15W201S firmware.
// Service loop.
//
// Copyright (c) 2022 Dilshan R Jayakody.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//---------------------------------------------------------------------------------

#include "stc15/stc15.h"
#include "main.h"
#include "utils.h"
#include "eeprom.h"

#define SPEAKER_MUTE    0xFF
#define SPEAKER_ON      0x00

#define SET_MUTE_INDICATOR      (P1 = P1 | 0x08)
#define CLEAR_MUTE_INDICATOR    (P1 = P1 & 0xF7)

const unsigned char displayData[8] = {0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F};
unsigned char relayMute = 0x00;

unsigned char activeChannel, isMute;
unsigned char displayVal, relayVal;
unsigned char lastButtonState, relayCountDown;
unsigned char buttonDownCounter;

void main()
{
    // Initialize the MCU and attached peripherals.
    initSystem();
    SET_MUTE_INDICATOR;
    delay50ms();

    lastButtonState = (P1 & 0x10);
    buttonDownCounter = 0;
    isMute = SPEAKER_ON;
    
    // Get last channel selection from the EEPROM.
    activeChannel = readActiveChannel();
    if(activeChannel > MAX_CHANNEL)
    {
        // EEPROM data is invalid and reset channel to the default channel.
        activeChannel = DEFAULT_CHANNEL;
    }

    // Update channel information on shift registers.
    displayVal = displayData[activeChannel];
    relayVal = (1 << activeChannel);
    delay50ms();

    setOutput(&displayVal, &relayVal);
    CLEAR_MUTE_INDICATOR;

    // Main service loop.
    while(1)
    {
        // Check for button release event.
        if((lastButtonState == 0x00) && ((P1 & 0x10) == 0x10))
        {
            if(buttonDownCounter <= LONG_PRESS_TIME)
            {
                // Button press is detected and change the active channel.
                activeChannel++;
                if(activeChannel > MAX_CHANNEL)
                {
                    activeChannel = 0;
                }

                // Update display and start the count-down timer to apply the selection.
                displayVal = displayData[activeChannel];
                relayCountDown = EEPROM_WRITE_TIME;                               
                setOutput(&displayVal, (isMute ? (&relayMute) : (&relayVal)));
            }

            buttonDownCounter = 0;            
        }

        // Check for long button press.
        if((P1 & 0x10) == 0x00)
        {
            if(buttonDownCounter < 0xFF)
            {
                buttonDownCounter++;
            }

            if(buttonDownCounter == LONG_PRESS_TIME)
            {
                // Long button press is detected and toggle the mute.
                isMute = ~isMute;
                if(isMute)
                {
                    setOutput(&displayVal, &relayMute);
                    SET_MUTE_INDICATOR;
                }
                else
                {
                    setOutput(&displayVal, &relayVal);
                    CLEAR_MUTE_INDICATOR;
                }
            }
        }
                
        lastButtonState = (P1 & 0x10);
        delay50ms();

        if(relayCountDown == RELAY_CHANGE_TIME)
        {
            // Change relay to the new channel.
            relayVal = (1 << activeChannel);            
            CLEAR_MUTE_INDICATOR;
            setOutput(&displayVal, &relayVal);
            isMute = SPEAKER_ON; 
        }
        else if(relayCountDown == 1)
        {
            // Write new channel selection on EEPROM.
            writeActiveChannel(activeChannel);
        }
        
        if(relayCountDown > 0)
        {
            // End of the count-down timer.
            relayCountDown--;
        }
    }
}

void setOutput(unsigned char *ssd, unsigned char *relay)
{
    unsigned char *output;
    unsigned char pos = 7, reg = 2;

    // Load seven segment data into the (2nd) shift register.
    output = ssd;
    
    do
    {    
        while(pos != 0xFF)
        {
            P1 = P1 & 0xF8;
            P1 = P1 | (((*output) & (1 << pos)) ? 0x01 : 0x00);
            delay10us();
            P1 = P1 | 0x02;
            delay10us();
            pos--;
        }

        // Set relay output position to the (1st) shift register.
        pos = 7;
        output = relay;
        reg--;
    }
    while(reg > 0);

    P1 = P1 & 0xF8;

    // Latch shift register outputs.
    P1 = P1 | 0x04;
    delay10us();

    P1 = P1 & 0xF8;
}

void initSystem()
{
    // P1.0 - [OUT] Serial data for relay control shift register [74HC595].
    // P1.1 - [OUT] Serial clock for relay control shift register [74HC595].
    // P1.2 - [OUT] Output latch for relay control shift register [74HC595].
    // P1.3 - [OUT] Mute LED.
    // P1.4 - [IN] Speaker selection button.
    P1M0 = 0x0F;
    P1M1 = 0x10;
    P1 = 0x10;    
}