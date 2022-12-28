//---------------------------------------------------------------------------------
// STC51 SPI definitions for SDCC.
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

#ifndef STC15W_SPI_H
#define STC15W_SPI_H

// Serial peripheral interface (SPCTL) bit definitions.
#define SSIG    0x80    // Enable / disable SS pin function.
#define SPEN    0x40    // SPI enable bit.
#define DORD    0x20    // Set the transmitted or received SPI data order.
#define MSTR    0x10    // Master/Slave mode select bit.
#define CPOL    0x08    // SPI clock polarity select bit.
#define CPHA    0x04    // SPI clock phase select bit.
#define SPR1    0x02    // SPI clock rate select bit 1.
#define SPR0    0x01    // SPI clock rate select bit 2.

#endif /* STC15W_SPI_H */