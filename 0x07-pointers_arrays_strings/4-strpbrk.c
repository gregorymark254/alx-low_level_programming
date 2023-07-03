#include "main.h"

/**
 * _strpbrk - check main
 * @s: input
 * @accept: input
 * Description: function _strpbrk
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}
