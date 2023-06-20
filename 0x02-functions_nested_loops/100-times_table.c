#include "main.h"

/**
 * print_times_table - check main
 * @n: input
 * Description: function print_times_table()
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, val;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			val = i * j;

			if (val <= 9)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(val + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (val > 9 && val <= 99)
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((val / 100) + '0');
				_putchar((val / 10 % 10) + '0');
				_putchar((val % 10) + '0');
				if(j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
