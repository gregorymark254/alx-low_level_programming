#include "main.h"

/**
 * _strcpy- check main
 * @dest: input
 * @src: input
 * Description: function _strcpy
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
