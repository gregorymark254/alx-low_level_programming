#include "main.h"

/**
 * print_line - check main
 * @n: input
 * Description: function that draws a straight line in the terminal
 * Return: nothing
 */

void print_line(int n)
{
	int num;

	for (num = 1; num <= n; num++)
	{
		_putchar('_');
		if (num == 0 || num < 0)
			_putchar('\n');
	}
	_putchar('\n');
}
