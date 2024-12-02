CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = projeto

SRC = src/main.c

all:
    $(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
    rm -f $(TARGET)
