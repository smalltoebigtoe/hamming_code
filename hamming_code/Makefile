TARGET = hc

CC = gcc
CFLAGS = -g -Wall -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
		 	-Wcast-align  -Wstrict-overflow=5 -Wformat=2 \
			-Wwrite-strings -Wcast-qual -Wswitch-default -Wformat=2 \
			-Wswitch-enum -Wconversion -Wunreachable-code

OBJECTS = main.o parity.o conversion.o

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS) $(CFLAGS)

main.o: main.c
	$(CC) -c main.c
parity.o: parity.c parity.h
	$(CC) -c parity.c
conversion.o: conversion.c conversion.h
	$(CC) -c conversion.c

.PHONY: clean
clean:
	-rm $(TARGET) $(OBJECTS)
