#include "game.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int secret = (rand() % 100) + 1;

    int amount_of_guesses = play_game(secret);
    update_high_score(amount_of_guesses);

    return 0;

}