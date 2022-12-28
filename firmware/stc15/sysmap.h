//---------------------------------------------------------------------------------
// STC51 system peripheral mappings for SDCC.
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

#ifndef STC15W_SYSMAP_H
#define STC15W_SYSMAP_H

// Power Control (PCON) bit definitions.
#define SMOD    0x80    // Double Baud rate control bit.
#define SMOD0   0x40    // Frame Error select.
#define LVDF    0x20    // Low-Voltage Flag.
#define POF     0x10    // Power-On flag.
#define GF1     0x08    // General-purposed flag 1.
#define GF0     0x04    // General-purposed flag 0.
#define PD      0x02    // Stop Mode/Power-Down Select bit.
#define IDL     0x01    // Idle mode select bit.

// BUS_SPEED register.
#define EXRTS1  0x02    // Extend RAM Timing Selector.
#define EXRTS0  0x01    // Extend RAM Timing Selector.

// Watchdog Control (WDT_CONTR) bit definitions.
#define WDT_FLAG    0x80    // WDT reset flag.
#define EN_WDT      0x20    // Enable WDT bit.
#define CLR_WDT     0x10    // WDT clear bit.
#define IDLE_WDT    0x08    // WDT IDLE mode bit.
#define WDT_PS2     0x04    // WDT Pre-scale value set bit 2.
#define WDT_PS1     0x02    // WDT Pre-scale value set bit 1.
#define WDT_PS0     0x01    // WDT Pre-scale value set bit 0.

// Auxiliary (AUXR) register bit definitions.
#define TO_12       0x80    // Timer 0 clock source bit.
#define T1_12       0x40    // Timer 1 clock source bit.
#define UART_M6     0x20    // Baud rate select bit of UART1.
#define T2R         0x10    // Timer 2 Run control bit.
#define T2CT        0x08    // Timer 2 clock source bit.
#define T2_12       0x04    // General-purposed flag 0.
#define EXTRAM      0x02    // Internal / external RAM access control bit.
#define S1ST2       0x01    // Timer 2 as its baud-rate generator for UART1.

// Auxiliary 1 (AUXR1) register bit definitions.
#define S1_S1       0x80    // UART1/S1 can be switched between I/O pins P1 and P3.
#define S1_S0       0x40    // UART1/S1 can be switched between I/O pins P1 and P3.
#define CCP_S1      0x20    // CCP can be switched between I/O pins P1, P2 and P3.
#define CCP_S0      0x10    // CCP can be switched between I/O pins P1, P2 and P3.
#define SPI_S1      0x08    // SPI can be switched between I/O pins P1, P2 and P4.
#define SPI_S0      0x04    // SPI can be switched between I/O pins P1, P2 and P4.
#define DPS         0x01    // DPTR registers select bit.

#endif /* STC15W_SYSMAP_H */