#include "main.h"

/**
* print_binary - entry point of node
* @n: input to a node
* Return: null or address
*/

void print_binary(unsigned long int n)
{
	int b = sizeof(unsigned long int) * 8, i;
	unsigned long int m;
	int post = 0;

	for (i = b - 1; i >= 0; i--)
	{
		m = 1UL << i;
		if ((n & m) == m)
		{
			_putchar('1');
			post = 1;
		}
		else if (post == 1)
		{
			_putchar('0');
		}
	}
	if (post == 0)
	{
		_putchar('0');
	}
}
