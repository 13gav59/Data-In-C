CC = gcc
CFLAGS = -Wall

queues: Queues.c 
	$(CC) $(CFLAGS) -o Queues Queues.c

stacks: Stacks.c
	$(CC) $(CFLAGS) -o Stacks Stacks.c

clean:
	rm -f *.exe
