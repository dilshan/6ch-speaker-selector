//---------------------------------------------------------------------------------
// STC51 UART definitions for SDCC.
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

#ifndef STC15W_UART_H
#define STC15W_UART_H

// Serial Control (SCON) bit definitions.
#define SM0 0x80    // Serial mode 0.
#define SM1 0x40    // Serial mode 1.
#define SM2 0x20    // Serial mode 2.
#define REN 0x10    // Enables serial reception.
#define TB8 0x08    // Enable 9th data bit transmission.
#define RB8 0x04    // Received 9th data bit.
#define TI  0x02    // Transmit interrupt flag.
#define RI  0x01    // Receive interrupt flag.

// Serial Control 2 (S2CON) bit definitions.
#define S2SM0 0x80    // Serial mode 0.
#define S2SM2 0x20    // Serial mode 2.
#define S2REN 0x10    // Enables serial reception.
#define S2TB8 0x08    // Enable 9th data bit transmission.
#define S2RB8 0x04    // Received 9th data bit.
#define S2TI  0x02    // Transmit interrupt flag.
#define S2RI  0x01    // Receive interrupt flag.

// Serial Control 3 (S3CON) bit definitions.
#define S3SM0 0x80    // Serial mode 0.
#define S3ST3 0x40    // Serial mode 1.
#define S3SM2 0x20    // Serial mode 2.
#define S3REN 0x10    // Enables serial reception.
#define S3TB8 0x08    // Enable 9th data bit transmission.
#define S3RB8 0x04    // Received 9th data bit.
#define S3TI  0x02    // Transmit interrupt flag.
#define S3RI  0x01    // Receive interrupt flag.

// Serial Control 4 (S4CON) bit definitions.
#define S4SM0 0x80    // Serial mode 0.
#define S4ST4 0x40    // Serial mode 1.
#define S4SM2 0x20    // Serial mode 2.
#define S4REN 0x10    // Enables serial reception.
#define S4TB8 0x08    // Enable 9th data bit transmission.
#define S4RB8 0x04    // Received 9th data bit.
#define S4TI  0x02    // Transmit interrupt flag.
#define S4RI  0x01    // Receive interrupt flag.

#endif /* STC15W_UART_H */