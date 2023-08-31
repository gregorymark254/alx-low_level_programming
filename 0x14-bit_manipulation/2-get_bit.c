#include "main.h"

/**
* get_bit - entry point of a node
* @n: input to the node
* @index: pointer to a node
* Return: null or address
*/

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= 32)
		return (-1);

	return ((n & (1UL << index)) ? 1 : 0);
}
