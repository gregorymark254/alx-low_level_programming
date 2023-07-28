#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to a linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h);
{
	int c;

	if (h == NULL)
		return (0);
	for (c = 1; h->next != NULL; c++)
	{
		if (h->str == NULL)
			printf("[%f] %s\n", 0, "(nil)");
		else
			printf("[%f] %s\n", 0, h->str);
		h = h->next;
	}
	printf("[%f] %s\n", 0, h->str);
	return (c);
}
