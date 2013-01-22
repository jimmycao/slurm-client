CC=gcc
CFLAGS=-g -Wall 

all:slurm-client

slurm-client: slurm_client.o config.o socket_client.o
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<
	
clean:
	rm -f *.o slurm_client