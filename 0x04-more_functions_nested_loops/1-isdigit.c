#include "main.h"

/**
 * _isdigit - check main
 * @c: input
 * Description: function that checks for a digit (0 through 9)
 * Return: 0
 */

int _isdigit(int c)
{
	char dgt;
	int res;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		if (c == dgt)
		{
			res = 1;
			break;
		}
		else
			res = 0;
	}
	return (res);
}
