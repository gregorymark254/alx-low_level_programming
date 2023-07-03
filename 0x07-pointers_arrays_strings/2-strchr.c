#include "main.h"

/**
 * _strchr - check main
 * @s: input
 * @c: input
 * Description: function _strchr
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (s[i] == c)
		return (&s[i]);
	return ('\0');
}
