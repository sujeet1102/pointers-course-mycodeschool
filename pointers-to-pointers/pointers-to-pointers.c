/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: pointers-to-pointers.c
 * Description: Understanding pointers to pointers (double pointers)
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

int main(void)
{
    // Pointer to pointer
    uint32_t x = 5;
    printf("Address of x = %u\n", &x);
    uint32_t *p = &x;
    printf("Address of p = %u\n", &p);
    *p = 6;
    uint32_t **q = &p;
    printf("Address of q = %u\n", &q);
    uint32_t ***r = &q;
    printf("Address of r = %u\n\n", &r);

    printf("Value of *p = %u\n", *p); // 6
    printf("Value of *q = %u\n", *q); // &x
    printf("Value of **q = %u\n", **q); // 6
    printf("Value of *r = %u\n", *r); // &p
    printf("Value of **r = %d\n", **r); // &x
    printf("Value of ***r = %u\n", ***r);   // 6
    ***r = 10;
    printf("Value of x = %u\n", x);
    **q = *p + 2;
    printf("Value of x = %u\n", x);
    
    return 0;
}