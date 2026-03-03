/*
 * SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

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