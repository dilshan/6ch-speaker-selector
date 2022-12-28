//---------------------------------------------------------------------------------
// 6-channel speaker selector - STC15W201S firmware.
// Main header file.
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

#ifndef __SPEAKER_SELECTOR_V2_MAIN_HEADER__
#define __SPEAKER_SELECTOR_V2_MAIN_HEADER__

// Number of channels (counting from 0).
#define MAX_CHANNEL     5
#define DEFAULT_CHANNEL 0

#define EEPROM_WRITE_TIME   22
#define RELAY_CHANGE_TIME   11

#define LONG_PRESS_TIME     8

void initSystem();

void setOutput(unsigned char *ssd, unsigned char *relay);

#endif /* __SPEAKER_SELECTOR_V2_MAIN_HEADER__ */