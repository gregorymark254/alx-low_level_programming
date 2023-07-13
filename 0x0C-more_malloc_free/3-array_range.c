#include "main.h"
#include <stdlib.h>

/**
* array_range - entry point
* @min: input
* @max: input
* Description: function
* Return: 0
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
