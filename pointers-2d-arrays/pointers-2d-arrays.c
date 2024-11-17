/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: pointers-2d-arrays.c
 * Description: Understanding multi-dimensional arrays wrt pointers
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

int32_t func(int32_t (*A)[2][2])
{
    printf("Print C = %u\n", A);
}

int main(void)
{
    int32_t B[3][4];
    int32_t (*p)[4] = B;    // pointer to 1-D array of 4 integers

    printf("B or &B[0] = %u\n", B); // name of 2d array, gives pointer to 1-D array of 4 integers
    printf("*B or B[0] or &B[0][0] = %u\n", *B);    // dereferenced *(B + 0) name of integer array, gives pointer to integer
    printf("B+1 or &B[1] = %u\n", B+1); // in 2d array used pointer arithmetic to go 1th index, gives pointer to 1-D array of integer
    printf("*(B+1) or B[1] or &B[1][0] = %u\n", *(B+1));    // dereferenced the 1th index of B, gives pointer to integer
    int32_t *ptr = *(B+1)+2;
    printf("*(B+1)+2 or B[1]+2 or &B[1][2] = %u\n", *(B+1)+2);  // gives  pointer to B[1][2]

    // for 2d arrays
    // B[i][j] = *(B[i] + j) = *(*(B + i) + j)

    int32_t C[3][2][2]; // 3D array
    int32_t (*ptr_0)[2][2] = C;    // pointer to 2D array of integers
    printf("Print C = %u\n", C);
    int32_t (*ptr_1)[2] = *C; // gives pointer to 1D array of integers
    printf("Print *C or C[0] or &C[0][0] = %u\n", *C);

    func(C);
    
    return 0;
}
    