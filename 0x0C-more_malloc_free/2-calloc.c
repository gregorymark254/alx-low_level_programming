#include "main.h"
#include <stdlib.h>

/**
* _calloc - entry point
* @nmemb: input
* @size: input
* Description: function
* Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
