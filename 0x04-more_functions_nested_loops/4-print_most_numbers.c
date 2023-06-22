#include "main.h"

/**
 * print_most_numbers - check main
 * @void: input
 * Description: function that prints the numbers, from 0 to 9
 * Return: nothing
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}
	_putchar('\n');
}
