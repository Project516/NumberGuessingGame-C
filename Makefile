CC = gcc

TARGET = NumberGuessingGame-C

SRC = src/main.c src/game.c src/save.c

CFLAGS = -Wall -Iinclude

all:
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(TARGET)