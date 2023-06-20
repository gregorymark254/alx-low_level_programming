#include "main.h"

/**
 * _islower - Check main
 * @c: input character
 * Description: function uses _putchar to  print
 * Return: 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}
	return (lower);
}
