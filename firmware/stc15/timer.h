//---------------------------------------------------------------------------------
// STC51 timer definitions for SDCC.
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

#ifndef STC15W_TIMER_H
#define STC15W_TIMER_H

// Timer Control (TCON) bit definitions.
#define TF1 0x80    // Timer/Counter 1 Overflow Flag.
#define TR1 0x40    // Timer/Counter 1 Run Control bit.
#define TF0 0x20    // Timer/Counter 0 Overflow Flag.
#define TR0 0x10    // Timer/Counter 0 Run Control bit.
#define IE1 0x08    // External Interrupt 1 request flag.
#define IT1 0x04    // External Intenupt 1 Type Select bit.
#define IE0 0x02    // External Interrupt 0 request flag.
#define IT0 0x01    // External Intenupt 0 Type Select bit.

#endif /* STC15W_TIMER_H */