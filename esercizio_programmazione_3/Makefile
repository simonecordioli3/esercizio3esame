CC=gcc
CFLAGS=-std=gnu99

all: list_average list2array

list_average: FORCE
	rm -rf *~ list_average
	$(CC) -o list_average list_average.c list_average_main.c $(CFLAGS)

list2array: FORCE
	rm -rf *~ list2array
	$(CC) -o list2array list2array.c list2array_main.c $(CFLAGS)

clean:
	rm -rf *~ list_average list2array

FORCE: