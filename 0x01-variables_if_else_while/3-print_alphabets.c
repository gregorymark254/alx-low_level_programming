#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Sch = 'a';
	int Bch = 'A';

	while (Sch <= 'z')
	{
		putchar(Sch);
		Sch++;
	}
	while (Bch <= 'Z')
	{
		putchar(Bch);
		Bch++;
	}
	putchar('\n');
	return (0);
}
