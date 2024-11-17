/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: pointers-function-args.c
 * Description: Understanding use case of pointers as function arguments.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void increment_pass_by_value(uint32_t a)    // local copy is created
{
    a = a + 1;  // local copy gets incremented, not actual 
}

void increment_pass_by_reference(uint32_t *ptr_a)   // pointer to a in main's stack frame
{
    *(ptr_a) = *(ptr_a) + 1;    // Use dereferencing to increment that memory location value
}

int main(void)
{
    // Looking into call by value vs call by reference
    uint32_t a = 10;

    increment_pass_by_value(a);
    printf("%u\n", a);

    increment_pass_by_reference(&a);
    printf("%u\n", a);
    
    return 0;
}