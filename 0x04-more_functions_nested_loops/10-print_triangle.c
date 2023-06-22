#include "main.h"

/**
 * print_triangle - check main
 * @size: input
 * Description: function that prints a triangle, followed by a new line
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, num = size - 1;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < num)
					_putchar(' ');
				else
					_putchar('#');
			}
			num--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
