#include "game.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int secret = (rand() % 100) + 1;

    play_game(secret);

    return 0;

}