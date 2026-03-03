CC = gcc

TARGET = NumberGuessingGame-C

SRC = src/main.c src/game.c src/save.c

CFLAGS = -Wall -Iinclude

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)