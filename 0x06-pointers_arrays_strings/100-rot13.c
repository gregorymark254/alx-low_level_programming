#include "main.h"

/**
 * rot13 - check main
 * @s: input
 * Description: function
 * Return: 0
 */

char *rot13(char *s)
{
	int i = 0, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = alph2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
