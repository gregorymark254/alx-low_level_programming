#include "main.h"

/**
 * swap_int - check main
 * @a: input
 * @b: input
 * Description: function swap_int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
