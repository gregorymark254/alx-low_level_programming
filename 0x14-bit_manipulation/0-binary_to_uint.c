#include "main.h"

/**
* binary_to_uint - entry point of a node
* @b: input node
* Return: null or address 
*/

unsigned int binary_to_uint(const char *b)

{
	unsigned int sum = 0, i, len = 0, j;

	if (b == 0)
		return (0);

	while (b[len] != '\0')
		len++;

	j = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') << j;
		j--;
	}
	return (sum);
}
