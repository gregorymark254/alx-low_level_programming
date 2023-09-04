#include "main.h"
#include <stdio.h>

/**
 * file_error - checking if there are errors
 * @file_org: origin of the file
 * @file_dest: destination of the file
 * @argv: argument to the vector
 * Return: null or void
 */
void file_error(int file_org, int file_dest, char *argv[])
{
	if (file_org == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - starting point
 * @argc: argument counter
 * @argv: argument vector
 * Return: null or address
 */
int main(int argc, char *argv[])
{
	int file_org, file_dest, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_org file_dest");
		exit(97);
	}

	file_org = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_org, file_dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_org, buf, 1024);
		if (nchars == -1)
			file_error(-1, 0, argv);
		nwr = write(file_dest, buf, nchars);
		if (nwr == -1)
			file_error(0, -1, argv);
	}

	err_close = close(file_org);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_org);
		exit(100);
	}

	err_close = close(file_dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_org);
		exit(100);
	}
	return (0);
}

