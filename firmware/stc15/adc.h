//---------------------------------------------------------------------------------
// STC51 ADC definitions for SDCC.
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

#ifndef STC15W_ADC_H
#define STC15W_ADC_H

// Analog to digital converter (ADC) bit definitions.
#define ADC_POWER   0x80    // ADC power control bit.
#define SPEED1      0x40    // Conversion speed selection.
#define SPEED0      0x20    // Conversion speed selection.
#define ADC_FLAG    0x10    // ADC interrupt flag.
#define ADC_START   0x08    // ADC start bit.
#define CHS2        0x04    // Analog input source selector bit.
#define CHS1        0x02    // Analog input source selector bit.
#define CHS0        0x01    // Analog input source selector bit.

#endif /* STC15W_ADC_H */