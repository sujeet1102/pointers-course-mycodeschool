/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: function-returns.c
 * Description: Understanding ways functions return pointers
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

// uint32_t* Add_segfault(uint32_t* a, uint32_t* b)
// {
//     uint32_t c = (*a) + (*b);
//     return &c;
// }

uint32_t* Add(uint32_t* a, uint32_t* b)
{
    uint32_t *c = (uint32_t *)malloc(sizeof(uint32_t));
    *c = (*a) + (*b);
    return c;
}


int main(void)
{
    uint32_t a = 2, b = 4;
    // uint32_t *ptr = Add_segfault(&a, &b);    
    /* Segmentation fault; Because Add_segfault tries to return pointer to local variable 
                            but since its called function on top in the stack frame its life is over */ 
    uint32_t *ptr = Add(&a, &b); 
    printf("Sum = %u\n", *ptr);
    
    return 0;
}