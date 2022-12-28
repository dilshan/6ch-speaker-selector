//---------------------------------------------------------------------------------
// STC51 IAP/ISP definitions for SDCC.
// Based on STC15series MCU Data Sheet - 2015/10/10.
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

#ifndef STC15W_IAP_ISP_H
#define STC15W_IAP_ISP_H

// IAP / EEPROM (IAP_CONTR) bit definitions.
#define IAPEN       0x80    // ISP/IAP operation enable.
#define SWBS        0x40    // Software boot selection control bit.
#define SWRST       0x20    // Software reset trigger control.
#define CMD_FAIL    0x10    // Command Fail indication for ISP/IAP operation.
#define WT2         0x04    // Waiting time selection (for flashing) bit 2.
#define WT1         0x02    // Waiting time selection (for flashing) bit 1.
#define WT0         0x01    // Waiting time selection (for flashing) bit 0.

#endif /* STC15W_IAP_ISP_H */