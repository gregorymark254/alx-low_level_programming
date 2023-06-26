#include "main.h"
#include <stdio.h>

/**
 * print_array - check main
 * @a: input
 * @n: input
 * Description: function print_array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
