#include "main.h"

/**
 * _memset - check main
 * @s: input
 * @b: input
 * @n: input
 * Description: function _isalpha()
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
