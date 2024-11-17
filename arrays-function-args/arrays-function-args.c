/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: arrays-function-args.c
 * Description: Understanding how arrays behave when passed as function arguments.
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

int32_t SumofElements(int32_t A[] /* (Compiler implicitly converts to int32_t *A) */, uint32_t size)
{
    int32_t sum = 0;
    // A++; WARNING: This is now possible, doesn't give error
    // uint32_t size = sizeof(A)/sizeof(A[0]); This won't work because A is pointer to array
    // what ends up happening: size of pointer is 8 bytes, so size = 2, sum will be (1+2) = 3
    // only 3 ends up getting printed.
    printf("Size of pointer NOT array = %u\n", sizeof((int32_t *)A));
    for(uint32_t i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main(void)
{
    int32_t A[] = {1,2,3,4,5};
    uint32_t size = sizeof(A)/sizeof(A[0]);
    int32_t total = SumofElements(A, size);
    printf("Sum of all elements = %d\n", total);
    
    return 0;
}