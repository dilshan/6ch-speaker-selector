//---------------------------------------------------------------------------------
// 6-channel speaker selector - STC15W201S firmware.
// Delay routines.
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
#include "utils.h"

void delay50ms()
{
    // Generate 50ms delay on 11.0692MHz system clock.
    unsigned char cnt1 = 3, cnt2 = 27, cnt3  = 89;

    nop();
    nop();

    do
    {
        do
        {
            while (--cnt3);
        }
        while(--cnt2);
    }
    while (--cnt1);
}

void delay10us()
{
    // Generate 10us delay on 11.0692MHz system clock.
    unsigned char cnt1 = 25;

    nop();
    while(--cnt1);
}