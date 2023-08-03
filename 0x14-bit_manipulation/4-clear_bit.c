#include "main.h"

/**
* clear_bit - entry point to node
* @n: input to node
* @index: pointer to node
* Return: null or address
*/

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
