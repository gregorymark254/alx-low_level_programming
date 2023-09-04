#include "main.h"
#include <stdio.h>

/**
 * file_error - check if there is errors in files
 * @org: origin of the file
 * @dest: destination of the file
 * @argv: arguments
 * Return: null or address
*/

void file_error(int org, int dest, char *argv[])

{
	if (org == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - starting point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: null or address
*/

int main(int argc, char *argv[])

{
	int org, dest, close_error;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp org dest");
		exit(97);
	}

	org = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(org, dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(org, buf, 1024);
		if (nchars == -1)
			file_error(-1, 0, argv);
		nwr = write(dest, buf, nchars);
		if (nwr == -1)
			file_error(0, -1, argv);
	}

	close_error = close(org);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", org);
		exit(100);
	}

	close_error = close(dest);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", org);
		exit(100);
	}
	return (0);
}

