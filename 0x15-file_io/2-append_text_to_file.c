#include "main.h"

/**
* append_text_to_file - entry point to a node
* @filename: pointer to node
* @text_content: input to a node
* Return: null or address
*/

int append_text_to_file(const char *filename, char *text_content)

{
	int length = 0, openf, writef;

	if (filename == 0)
		return (-1);

	openf = open(filename, O_WRONLY | O_APPEND);
	if (openf == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		writef = write(openf, text_content, length);
		if (writef == -1)
		{
			close(openf);
			return (-1);
		}
	}
	close(openf);
	return (1);
}
