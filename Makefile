# SPDX-FileCopyrightText: 2026 project516 <project516@project516.dev>
#
# SPDX-License-Identifier: GPL-3.0-or-later

CC = gcc

TARGET = NumberGuessingGame-C

SRC = src/main.c src/game.c src/save.c

CFLAGS = -Wall -Iinclude

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)