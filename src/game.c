#include "game.h"

void play_game(int secret_number) 
{
    int guess = -1;
    int amount_of_guesses = 0;

    while (secret_number != guess)
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
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

    printf("Your guess of %d is correct!\nIt took you %d tries!\n", guess, amount_of_guesses);

}