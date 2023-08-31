#include "main.h"

/**
  * get_endianness - entry point to a node
  * Return: null or address
  */

int get_endianness(void)

{
	int c = 1;

	char *ch = (char *)&c;

	if (*ch)
		return (1);
	else
		return (0);
}
