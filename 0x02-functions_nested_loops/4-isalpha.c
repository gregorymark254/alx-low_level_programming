#include "main.h"

/**
 * _isalpha - check main
 * @c: input
 * Description: function _isalpha()
 * Return: 0
 */

int _isalpha(int c)
{
	char i, j;
	int letter = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (c == i || c == j)
				letter = 1;
		}
	}
	return (letter);
}
