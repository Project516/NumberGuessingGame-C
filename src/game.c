/*
 * SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

 /* Main game program */
 
#include "game.h"

int play_game(int secret_number) 
{
    int guess = -1;
    int amount_of_guesses = 0;

    while (secret_number != guess)
    {
        printf("Enter a number between 1 and 100: ");
        if (scanf("%d", &guess) != 1)
        {
            printf("Error reading input!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        else 
        {
            amount_of_guesses = amount_of_guesses +1;
        
            if (secret_number < guess)
            {
              printf("You guessed to high!\n");
            }
            else if (secret_number > guess)
            {
                printf("You guessed to low!\n");
            }
        }
    }

    printf("Your guess of %d is correct!\nIt took you %d tries!\n", guess, amount_of_guesses);

    return amount_of_guesses;

}