#include <stdio.h>

/**
 * begin - prints a sentence before main
 */

void __attribute__ ((constructor)) begin()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
