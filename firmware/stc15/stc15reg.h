//---------------------------------------------------------------------------------
// STC51 register mappings for SDCC.
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

#ifndef STC15W_REGISTER_MAP_H
#define STC15W_REGISTER_MAP_H

// STC15 series special function register map.
__sfr __at(0x80)    P0;         // Port 0.
__sfr __at(0x81)    SP;         // Stack Pointer.
__sfr __at(0x82)    DPL;        // Data Pointer Low.
__sfr __at(0x83)    DPH;        // Data Pointer High.
__sfr __at(0x84)    S4CON;      // S4 Control.
__sfr __at(0x85)    S4BUF;      // S4 Serial Buffer.

__sfr __at(0x87)    PCON;       // Power Control.
__sfr __at(0x88)    TCON;       // Timer Control.
__sfr __at(0x89)    TMOD;       // Timer Mode.
__sfr __at(0x8A)    TL0;        // Timer Low 0.
__sfr __at(0x8B)    TL1;        // Timer Low 1.
__sfr __at(0x8C)    TH0;        // Timer High 0.
__sfr __at(0x8D)    TH1;        // Timer High 1.
__sfr __at(0x8E)    AUXR;       // Auxiliary register.

__sfr __at(0x8F)    INT_CLKO;   // CLK_Output register.
__sfr __at(0x8F)    AUXR2;      // External Interrupt enable register.

__sfr __at(0x90)    P1;         // Port 1
__sfr __at(0x91)    P1M1;       // P1 configuration 1.
__sfr __at(0x92)    P1M0;       // P1 configuration 0.
__sfr __at(0x93)    P0M1;       // P0 configuration 1.
__sfr __at(0x94)    P0M0;       // P0 configuration 0.
__sfr __at(0x95)    P2M1;       // P2 configuration 1.
__sfr __at(0x96)    P2M0;       // P2 configuration 0.
__sfr __at(0x97)    CLK_DIV;    // Clock Divder.
__sfr __at(0x98)    SCON;       // Serial Control. 
__sfr __at(0x99)    SBUF;       // Serial Buffer.
__sfr __at(0x9A)    S2CON;      // S2 Control.
__sfr __at(0x9B)    S2SBUF;     // S2 Serial Buffer.
__sfr __at(0x9C)    BRT;        // Baud-Rate Timer.
__sfr __at(0x9D)    P1ASF;      // P1 Analog Special Function.

__sfr __at(0xA0)    P2;             // Port 2.
__sfr __at(0xA1)    BUS_SPEED;      // Bus-Speed Control.
__sfr __at(0xA2)    AUXR1;          // Auxiliary register1.

__sfr __at(0xA8)    IE;         // Interrupt Enable.
__sfr __at(0xA9)    SADDR;      // Slave Address.
__sfr __at(0xAA)    WKTCL;      // Power-Down Wake-up Timer Control register (Low).
__sfr __at(0xAB)    WKTCH;      // Power-Down Wake-up Timer Control register (High).
__sfr __at(0xAC)    S3CON;      // S3 Control.
__sfr __at(0xAD)    S3BUF;      // S3 Serial Buffer.

__sfr __at(0xAF)    IE2;        // Interrupt Enable 2.
__sfr __at(0xB0)    P3;         // Port 3.
__sfr __at(0xB1)    P3M1;       // P2 configuration 1.
__sfr __at(0xB2)    P3M0;       // P3 configuration 0.
__sfr __at(0xB3)    P4M1;       // P4 configuration 1.
__sfr __at(0xB4)    P4M0;       // P4 configuration 0.
__sfr __at(0xB5)    IP2;        // Interrupt Priority Low register 2.

__sfr __at(0xB8)    IP;         // Interrupt Priority Low.
__sfr __at(0xB9)    SADEN;      // Slave Address Mask.
__sfr __at(0xBA)    P_SW2;      // Peripheral Function Switch register 2.

__sfr __at(0xBC)    ADC_CONTR;  // ADC Control.
__sfr __at(0xBD)    ADC_RES;    // ADC Result.
__sfr __at(0xBE)    ADC_RESL;   // ADC Result Low.

__sfr __at(0xC0)    P4;             // Port 4.
__sfr __at(0xC1)    WDT_CONTR;      // Watch-Dog-Timer Control Register.
__sfr __at(0xC2)    IAP_DATA;       // ISP/IAP Flash Data Register.
__sfr __at(0xC3)    IAP_ADDRH;      // ISP/IAP Flash Address High.
__sfr __at(0xC4)    IAP_ADDRL;      // ISP/IAP Flash Address Low.
__sfr __at(0xC5)    IAP_CMD;        // ISP/IAP Flash Command Register.
__sfr __at(0xC6)    IAP_TRIG;       // ISP/IAP Flash Command Trigger.
__sfr __at(0xC7)    IAP_CONTR;      // ISP/IAP Control Register.
__sfr __at(0xC8)    P5;             // Port 5.
__sfr __at(0xC9)    P5M1;           // P5 Configuration 1.
__sfr __at(0xCA)    P5M0;           // P5 Configuration 0.
__sfr __at(0xCB)    P6M1;           // P6 Configuration 1.
__sfr __at(0xCC)    P6M0;           // P6 Configuration 0.
__sfr __at(0xCD)    SPSTAT;         // SPI Status register.
__sfr __at(0xCE)    SPCTL;          // SPI control register.
__sfr __at(0xCF)    SPDAT;          // SPI Data register.

__sfr __at(0xD0)    PSW;            // Program Status Word.
__sfr __at(0xD1)    T4T3M;          // T4 and T3 mode register.
__sfr __at(0xD2)    T4H;            // Timer 4 high 8-bit register.
__sfr __at(0xD3)    T4L;            // Timer 4 low 8-bit register. 
__sfr __at(0xD4)    T3H;            // Timer 3 high 8-bit register. 
__sfr __at(0xD5)    T3L;            // Timer 3 low 8-bit register.  
__sfr __at(0xD6)    T2H;            // Timer 2 high 8-bit register.
__sfr __at(0xD7)    T2L;            // Timer 2 low 8-bit register.
__sfr __at(0xD8)    CCON;           // PCA Control Register.
__sfr __at(0xD9)    CMOD;           // PCA Mode Register.
__sfr __at(0xDA)    CCAPM0;         // PCA Module 0 Mode Register.   
__sfr __at(0xDB)    CCAPM1;         // PCA Module 1 Mode Register.
__sfr __at(0xDC)    CCAPM2;         // PCA Module 2 Mode Register.

__sfr __at(0xE0)    ACC;        // Accumulator.
__sfr __at(0xE1)    P7M1;       // P7 configuration 1.
__sfr __at(0xE2)    P7M0;       // P7 configuration 0.

__sfr __at(0xE8)    P6;         // Port 6.
__sfr __at(0xE9)    CL;         // PCA Base Timer Low.
__sfr __at(0xEA)    CCAP0L;     // PCA module 0 capture register low.
__sfr __at(0xEB)    CCAP1L;     // PCA module 1 capture register low.
__sfr __at(0xEC)    CCAP2L;     // PCA Module-2 Capture register Low.
  
__sfr __at(0xF0)    B;              // B Register.
__sfr __at(0xF2)    PCA_PWM0;       // PCA PWM Mode Auxiliary Register 0.
__sfr __at(0xF3)    PCA_PWM1;       // PCA PWM Mode Auxiliary Register 1.
__sfr __at(0xF4)    PCA_PWM2;       // PCA PWM Mode Auxiliary Register 2.

__sfr __at(0xF8)    P7;         // Port 7.
__sfr __at(0xF9)    CH;         // PCA Base Timer High.
__sfr __at(0xFA)    CCAP0H;     // PCA Module-0 Capture register high.
__sfr __at(0xFB)    CCAP1H;     // PCA Module-1 Capture register high.
__sfr __at(0xFC)    CCAP2H;     // PCA Module-2 Capture register high.

#endif /* STC15W_REGISTER_MAP_H */