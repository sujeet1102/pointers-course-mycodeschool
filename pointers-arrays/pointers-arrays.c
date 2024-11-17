/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: pointers-arrays.c
 * Description: Understanding relation between pointers & arrays.
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
    uint32_t arr[5] = {2,4,6,8,1};
    printf("%u\n", arr);    // Gives address of array (first location)
    uint32_t *ptr_arr = arr;    // Pointer to integer in array
    printf("%u\n", *ptr_arr);
    printf("Printing address:%u %u %u\n", (ptr_arr+2), (arr+2), &arr[2]);
    printf("Printing values:%u %u %u\n", *(ptr_arr+2), *(arr+2), arr[2]);
    // arr = arr + 1; Not possible
    
    return 0;
}