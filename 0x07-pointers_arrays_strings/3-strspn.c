#include "main.h"

/**
 * _strspn - check main
 * @s: input
 * @accept: input
 * Description: function strspn
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, sum = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				sum += 1;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
			break;
		i++;
	}
	return (sum);
}
