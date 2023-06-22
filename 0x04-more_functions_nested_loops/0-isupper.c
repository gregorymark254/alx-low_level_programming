#include "main.h"

/**
 * _isupper - check main
 * @c: input
 * Description: function that checks for uppercase character.
 * Return: 0 or 1
 */

int _isupper(int c)
{
	char ch;
	int res = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			res = 1;
			break;
		}
	}
	return (res);
}
