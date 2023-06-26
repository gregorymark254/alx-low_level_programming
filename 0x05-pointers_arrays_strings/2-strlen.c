#include "main.h"

/**
 * _strlen - check main
 * @s: input
 * Description: function _strlen
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
