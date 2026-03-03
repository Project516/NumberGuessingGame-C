CC = gcc

TARGET = NumberGuessingGame-C

SRC = src/main.c src/game.c 

all:
	$(CC) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)