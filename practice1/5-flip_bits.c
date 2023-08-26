#include "main.h"

/**
  * flip_bits - entry point to a node
  * @n: input of node
  * @m: pointer to node
  * Return: null or address
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip_bits = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		if (i & 1)
			flip_bits = flip_bits + 1;
		i = i >> 1;
	}
	return (flip_bits);
}
