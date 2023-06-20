#include "main.h"

/**
 * print_sign - check main
 * @n: input
 * Description: function print_sign()
 * Return: 0
 */

int print_sign(int n)
{
	int neg;

	if (n > 0)
	{
		_putchar('+');
		neg = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		neg = 0;
	}
	else
	{
		_putchar('-');
		neg = -1;
	}
	return (neg);
}
