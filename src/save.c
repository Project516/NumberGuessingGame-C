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
    int best_score = 999;
    mkdir(".NumberGuessingGame-C/", 0777);
    FILE *file = fopen(".NumberGuessingGame-C/highscore.txt", "r");

    if (file != NULL)
    {
        /*
         * If the save file exists but is empty or contains non-numeric
         * data, fscanf returns EOF or 0 and best_score is left untouched.
         * Defaulting to 999 above keeps a corrupt file from producing an
         * uninitialized value in the comparison below.
         */
        if (fscanf(file, "%d", &best_score) != 1)
        {
            best_score = 999;
        }
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