//---------------------------------------------------------------------------------
// 6-channel speaker selector - STC15W201S firmware.
// EEPROM routines.
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
#include "eeprom.h"

// IAP / EEPROM commands defined in STC datasheet.
#define IAP_CMD_IDLE    0
#define IAP_CMD_READ    1
#define IAP_CMD_PROGRAM 2
#define IAP_CMD_ERASE   3

void iapIdle()
{
    // Close IAP function.
    IAP_CONTR = 0;
    IAP_CMD = 0;
    IAP_TRIG = 0;

    // Move data pointer out of the EEPROM area.
    IAP_ADDRH = 0x80;
    IAP_ADDRL = 0;
}

void writeActiveChannel(unsigned char channel)
{
    // Erase 1st sector of the IAP memory region.
    IAP_CONTR = IAPEN | WT1;
    IAP_CMD = IAP_CMD_ERASE;

    // Select 1st sector of the IAP memory.
    IAP_ADDRL = 0x00;
    IAP_ADDRH = 0x00;

    // Initialize the EEPROM erase.
    IAP_TRIG = 0x5A;
    IAP_TRIG = 0xA5;

    // Wait to finish the EEPROM erase.
    nop();
    iapIdle();

    // Enter IAP into programming mode.
    IAP_CONTR = IAPEN | WT1;
    IAP_CMD = IAP_CMD_PROGRAM;

    // Select the first address from the first IAP memory sector.
    IAP_ADDRL = 0x00;
    IAP_ADDRH = 0x00;

    // Set new data value.
    IAP_DATA = channel;

    // Initialize the EEPROM programming.
    IAP_TRIG = 0x5A;
    IAP_TRIG = 0xA5;

    // Wait to finish the EEPROM programming.
    nop();
    iapIdle();
}

unsigned char readActiveChannel()
{
    unsigned char tempData;

    // Enter IAP into the read mode.
    IAP_CONTR = IAPEN | WT1;
    IAP_CMD = IAP_CMD_READ;

    // Select the first address from the first IAP memory sector.
    IAP_ADDRL = 0x00;
    IAP_ADDRH = 0x00;

    // Initialize the EEPROM read operation.
    IAP_TRIG = 0x5A;
    IAP_TRIG = 0xA5;

    // Wait to finish the EEPROM read operation.
    nop();
    
    tempData = IAP_DATA;
    iapIdle();

    return tempData;
}