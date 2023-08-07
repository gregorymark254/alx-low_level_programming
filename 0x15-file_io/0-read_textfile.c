#include "main.h"

/**
* read_textfile - entry point to a node
* @filename: pointer to a node
* @letters: input to a node
* Return: null or address
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *memory;
	int openf;
	ssize_t readf;

	if (filename == 0)
		return (0);
	openf = open(filename, O_RDONLY);
	if (openf == -1)
		return (0);

	memory = malloc(sizeof(char) * letters);
	if (memory == NULL)
	{
		close(openf);
		return (0);
	}

	readf = read(openf, memory, letters);
	if (readf == -1)
	{
		free(memory);
		close(openf);
		return (0);
	}

	if (write(STDOUT_FILENO, memory, readf) == -1)
	{
		free(memory);
		close(openf);
		return (0);
	}

	free(memory);
	close(openf);
	return (readf);
}
