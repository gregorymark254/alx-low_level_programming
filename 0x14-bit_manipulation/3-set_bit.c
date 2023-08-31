#include "main.h"

/**
* set_bit - entry point to node
* @n: input to node
* @index: pointer to node
* Return: null or address
*/

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index >= 32)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
