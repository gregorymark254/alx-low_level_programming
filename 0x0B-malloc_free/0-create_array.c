#include "main.h"
#include <stdlib.h>

/**
* create_array - entry point
* @size: input
* @c: input
* Description: function
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
