#include "main.h"

/**
 * print_square - check main
 * @size: input
 * Description: function that prints a square, followed by a new line
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
