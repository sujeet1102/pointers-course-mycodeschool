/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: function-pointers.c
 * Description: Understanding function pointers and callbacks
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

int32_t Add(int32_t a, int32_t b)
{
    return (a + b);
}

int32_t Sub(int32_t a, int32_t b)
{
    return (a - b);
}

void A()
{
    printf("Hello, World!\n");
}

void B(void (*ptr_to_callback_func)())  // function pointer as argument
{
    ptr_to_callback_func(); // callback function
}

int main(void)
{
    // Pointers to functions
    int32_t c;
    int32_t d;

    int32_t (*p)(int32_t, int32_t);
    int32_t (*q)(int32_t, int32_t);

    p = &Add;   // Also just using the function name returns address of function
    q = Sub;

    c = (*p)(3,2);  // dereferencing and executing the function
    d = q(3,2); // Alternate syntax

    printf("%d\n", c);
    printf("%d\n", d);

    B(A); // A is the callback function
    
    return 0;
}