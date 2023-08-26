#include "main.h"

/**
* create_file - entry point to a node
* @filename: pointer to a node
* @text_content: input to a node
* Return: null or address
*/

int create_file(const char *filename, char *text_content)

{
	int length = 0, openf, writef = 0;

	if (filename == 0)
		return (-1);

	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (openf == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		writef = write(openf, text_content, length);
		if (writef != length)
		{
			close(openf);
			return (-1);
		}
	}
	close(openf);
	return (1);
}
