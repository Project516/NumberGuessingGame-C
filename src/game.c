#include "game.h"

void play_game(int secret_number) 
{
    int guess = -1;

    while (secret_number != guess)
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
        
        if (secret_number < guess)
        {
            printf("You guessed to high!\n");
        }
        else if (secret_number > guess)
        {
            printf("You guessed to low!\n");
        }
    }

    printf("Your guess of %d is correct!\n", guess);

}