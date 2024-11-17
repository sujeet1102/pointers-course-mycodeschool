 /*
  * MIT License
  * 
  * Copyright (c) 2024 Sujeet Jagtap
  * 
  * File: char-arrays.c
  * Description: Understanding char arrays amd pointers.
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
#include <string.h>

void print_string(char *c)
{
    while(*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main(void)
{
    // 1. Strings are stored as char arrays with null termination '\0' indicating the end of string
    char c[8];
    c[0] = 'J';
    c[1] = '0';
    c[2] = 'H';
    c[3] = 'N';
    c[4] = '\0';    // if removed garbage will show up
    printf("String = %s\n", c);

    printf("Length of string = %u\n", strlen(c));  // string functions use null char
    printf("Size of char array storing string = %u\n", strlen(c));

    // 2. Arrays and pointers are different types that used in similar manner
    // Array names are used similar to pointer variables in some aspects
    // But they are not ptr variables
    char c1[6] = "Hello";
    char *c2;
    c2 = c1;    // Array name c1 is used similar to pointer
    printf("%c\n", c2[1]);  // e
    c2[0] = 'A';
    printf("%s\n", c1); // Aello
    // c1[i] == *(c1+i)
    // pointer arithmetic is invalid for c1 which is array not ptr variable

    // 3. Arrays are always passed by reference to functions
    char my_string[20] = "Johnny";
    print_string(my_string);

    // 4. strings constants
    char *C = "bakemonogatari"; // This is stored as a constant
    // *(C+1) = 'A';    // This gives segmentation fault
    print_string(C);

    return 0;
}