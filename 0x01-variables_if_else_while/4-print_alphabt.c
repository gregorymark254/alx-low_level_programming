#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
