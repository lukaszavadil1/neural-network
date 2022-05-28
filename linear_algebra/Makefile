CC=gcc
CFLAGS=-g -std=c11 -pedantic -Wall -Wextra -O2

all: main

##############################################

# RUN ON LINUX

run: main
	./main

##############################################

# RUN ON WINDOWS

win-run: main
	main.exe

##############################################

# GENERATE .o FILES

main.o: main.c
	$(CC) $(CFLAGS) main.c -c -o main.o

matrix.o: matrix.c
	$(CC) $(CFLAGS) matrix.c -c -o matrix.o

##############################################

# BUILD EXECUTABLES

main: main.o matrix.o
	$(CC) $(CFLAGS) main.o matrix.o

clean:
	rm *.o

win-clean:
	del *.o