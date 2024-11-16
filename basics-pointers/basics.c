/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: basics.c
 * Description: Understand the basics of pointers and memory address.
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
    uint32_t a;
    char b;
    uint8_t c;
    double d;
    uint64_t e;

    uint32_t *ptr_a = &a;   // pointer to uint32_t
    printf("Address of a:%u\tValue in pointer:%u\tAddress of pointer:%u\n", &a, ptr_a, &ptr_a);
    printf("Sizeof a:%u\tSizeof value at pointer:%u\tSizeof pointer:%u\n", sizeof(a), sizeof(*ptr_a), sizeof(ptr_a));
    a = 20;
    printf("%d\t%d\n\n", a, *ptr_a);  //Dereferencing of pointers

    char *ptr_b = &b;
    printf("Address of b:%u\tValue in pointer:%u\tAddress of pointer:%u\n", &b, ptr_b, &ptr_b);
    printf("Sizeof b:%u\tSizeof value at pointer:%u\tSizeof pointer:%u\n", sizeof(b), sizeof(*ptr_b), sizeof(ptr_b));
    b = 'A';
    printf("%c\t%c\n\n", b, *ptr_b);  //Dereferencing of pointers

    printf("Sizeof uint32_t: %d bytes\nSizeof char: %d bytes\nSizeof uint8_t: %d bytes\nSizeof double: %d bytes\nSizeof uint64_t: %d bytes\nSizeof pointer: %d bytes\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(ptr_b));
    return 0;
}