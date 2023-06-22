#include "main.h"

/**
 * print_diagonal - check main
 * @n: input
 * Description: function that draws a diagonal line on the terminal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i + 1; j++)
			{
				if (j != i + 1)
					_putchar(' ');
				else
					_putchar('\\');
				if (n == 0 || n < 0)
					_putchar('\n');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
