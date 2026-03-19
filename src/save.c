/*
 * SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

 /* Save file manager */

#include "game.h"
#include <sys/stat.h>
#include <sys/types.h>

void update_high_score(int current_score)
{
    int best_score;
    mkdir(".NumberGuessingGame-C/", 0777);
    FILE *file = fopen(".NumberGuessingGame-C/highscore.txt", "r");

    if (file == NULL)
    {
        best_score = 999;
    }
    else 
    {
        fscanf(file, "%d", &best_score);
        fclose(file);
    }

    if (current_score < best_score)
    {
        printf("New high score! Previous best was %d\n", best_score);

        file = fopen(".NumberGuessingGame-C/highscore.txt", "w");
        if (file != NULL)
        {
            fprintf(file, "%d", current_score);
            fclose(file);
        }
    }
    else
    {
        printf("The high score remains %d\n", best_score);
    }
}