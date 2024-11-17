/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: function-pointer-bubbleSort.c
 * Description: Example of dynamic bubble sort with help of function pointers
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

int32_t compare(int32_t a, int32_t b)
{
    if (a > b) return 1;
    else return -1;
}

int32_t abs_compare(int32_t a, int32_t b)
{
    if(abs(a) > abs(b)) return 1;
    else return -1;
}

void bubbleSort(int32_t *A, int32_t n, int32_t (*compare)(int32_t, int32_t))
{
    int32_t i, j, temp;
    for(int32_t i = 0; i < n; i++)
    {
        for(int32_t j = 0; j < n-1; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    int32_t i, A[] = {3,-2,5,1,-4};
    bubbleSort(A, 5, compare);
    for(i = 0; i < 5; i++) printf("%d ", A[i]);
    printf("\n");
    bubbleSort(A, 5, abs_compare);  // only absolute values are used for compare
    for(i = 0; i < 5; i++) printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}
    