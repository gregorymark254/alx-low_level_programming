#include "main.h"

/**
* print_binary - entry point of node
* @n: input to a node
* Return: null or address
*/

void print_binary(unsigned long int n)

{
	int a = sizeof(unsigned long int) * 8, c;
	unsigned long int m;
	int post = 0;

	for (c = a - 1; c >= 0; c--)
	{
		m = 1UL << c;
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
