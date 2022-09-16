TARGET = hc

CC = clang
CFLAGS = -g -Wall -Wfloat-equal -Wundef -Wshadow -Wpointer-arith \
		 	-Wcast-align  -Wstrict-overflow=5 -Wformat=2 \
			-Wwrite-strings -Wcast-qual -Wswitch-default -Wformat=2 \
			-Wswitch-enum -Wconversion -Wunreachable-code

SOURCES = main.c parity/parity.c parity/conversion.c
OBJECTS = $(SOURCES:.c=.o)

SUBDIRS = parity

$(TARGET): $(OBJECTS)
	$(CC) -o $< $(CFLAGS) $(SOURCES)

parity.o: parity.h
conversion.o: conversion.h

.PHONY: clean
clean:
	-rm $(TARGET) $(objects)

