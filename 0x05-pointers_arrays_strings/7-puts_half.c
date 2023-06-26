#include "main.h"

/**
 * puts_half - check main
 * @str: input
 * Description: function puts_half
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
