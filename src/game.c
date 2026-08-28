/*
 * SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
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
            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            /* EOF (Ctrl-D / Ctrl-Z) means the player wants to quit.
             * Without this check scanf keeps failing and the loop spins
             * forever because stdin stays in the EOF state. */
            if (feof(stdin))
            {
                printf("Goodbye!\n");
                return -1;
            }

            printf("Error reading input!\n");
            continue;
        }
        else 
        {
            amount_of_guesses = amount_of_guesses +1;
        
            if (secret_number < guess)
            {
              printf("You guessed too high!\n");
            }
            else if (secret_number > guess)
            {
                printf("You guessed too low!\n");
            }
        }
    }

    printf("Your guess of %d is correct!\nIt took you %d tries!\n", guess, amount_of_guesses);

    return amount_of_guesses;

}
