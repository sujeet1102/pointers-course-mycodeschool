/*
 * MIT License
 * 
 * Copyright (c) 2024 Sujeet Jagtap
 * 
 * File: mem-leak.c
 * Description: Understanding memory leak through a betting game
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
#include <time.h>

int32_t cash = 100;

void play(int32_t bet)
{
    char *C = (char *)malloc(3 * sizeof(char)); // since this function is called repeatedly and allocated memory
                                                // is not deallocated
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    printf("Shuffling.....\n");
    srand(time(NULL));  // seeding the random number generator
    int32_t i;
    for(i = 0; i < 5; i++)
    {
        int32_t x = rand() % 3;
        int32_t y = rand() % 3;
        int32_t temp = C[x];
        C[x] = C[y];
        C[y] = temp;    // swaps characters at position x and y
    }
    int32_t playersGuess;
    printf("What position is the Queen? - 1,2, or 3?\n");
    scanf("%d", &playersGuess);
    if(C[playersGuess-1] == 'Q')
    {
        cash += 3*bet;
        printf("You WIN ! Result = \"%c %c %c\" Total Cash = $%d\n", C[0],C[1],C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %c \" Total Cash = $%d\n", C[0],C[1],C[2],cash);
    }
}

int main(void)
{
    int32_t bet;
    printf("Welcome to CASINO Habibi!\n");
    printf("Total Cash = $%d\n", cash);
    while(cash > 0)
    {
        printf("Enter Bet amount = $");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) break;
        play(bet);
        printf("\n********************************************\n");
    }
    
    return 0;
}
    