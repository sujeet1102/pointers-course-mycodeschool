/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: pointer-types-arithmetic-void.c
 * Description: Understanding the pointer types, pointer arithmetic operations and void pointers.
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
    uint32_t a = 1025;  // imagine value of 1025 in binary stored in 4 bytes - 00000000 00000000 00000100 00000001
    uint32_t *ptr;
    ptr = &a;
    printf("Size of uint32_t is %u\n", sizeof(uint32_t));
    printf("Address = %u, value = %u\n", ptr, *ptr);

    uint8_t *ptr0 = (uint8_t*)ptr;  // typecasting
    printf("Size of uint8_t is %u\n", sizeof(uint8_t));
    printf("Address = %u, value = %u\n", ptr0, *ptr0);  // value will be 1
    printf("Address = %u, value = %u\n", (ptr0+1), *(ptr0+1));  // value will be 4

    void *ptr_void; // generic pointer type
    ptr_void = ptr; 
    // Only can be used to store the address, arithmetic and dereferencing not allowed
    printf("Address = %u\n", ptr_void);

    return 0;
}