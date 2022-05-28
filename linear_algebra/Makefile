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
	main

##############################################

# GENERATE .o FILES

main.o: main.c
	$(CC) $(CFLAGS) $< -c -o $@

matrix.o: matrix.c
	$(CC) $(CFLAGS) $< -c -o $@

operations.o: operations.c
	$(CC) $(CFLAGS) $< -c -o $@

##############################################

# BUILD EXECUTABLES

main: main.o matrix.o operations.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o main

win-clean:
	del *.o main.exe