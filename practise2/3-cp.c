#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

#define READF  "Error: Can't read from file %s\n"

/**
  * main - entry point
  * @argc: pointer to anode
  * @argv: input to a node
  * Return: null or address
  */

int main(int argc, char *argv[])

{
	char mem[1024];
	int from, to, closef;
	ssize_t readf, writef;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, READF, argv[1]), exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (1)
	{
		readf = read(from, mem, 1024);
		if (readf == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(98);
		if (readf > 0)
		{
			writef = write(to, mem, readf);
			if (writef == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		} else
			break;
	}
	if (chmod(argv[2], 0664) == 1)
		exit(101);
	closef = close(from);
	if (closef == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	closef = close(to);
	if (closef == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
