/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: dynamic-mem-allocation.c
 * Description: Understanding dynamic memory allocation in C
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
    //***************************************************************************
    // 1. malloc - Allocate a block of memory
    //             args - size_t size
    //             returns - void *
    //**************************************************************************
    int32_t n;
    scanf("%d", &n);

    int32_t *p = (int32_t *)malloc(n*sizeof(int32_t));    // tycasting is necessary

    for(int32_t i = 0; i < n; i++)
    {
        p[i] = i+1;
    }

    for(int32_t i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    //**********************************************************************
    // 2. calloc - Allocates specified blocks of memory initialized to zero
    //             args - size_t num, size_t size
    //             returns - void *
    //**********************************************************************
    int32_t *A = (int32_t *)calloc(n, sizeof(int32_t));

    for(int32_t i = 0; i < n; i++)  // calloc initializes memory blocks to zero
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    //**********************************************************************
    // 3. realloc - Change the size of dynamic memory
    //              args - void *ptr, size_t size
    //              return - void *
    //**********************************************************************
    A = realloc(A, 2*n*sizeof(int32_t));
    for(int32_t i = 0; i < 2*n; i++)  // calloc initializes memory blocks to zero
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    //**********************************************************************
    // free - dynamic memory needs to be explicitly deallocated
    //        args - pointer
    //**********************************************************************
    free(p);
    free(A);
    
    return 0;
}   