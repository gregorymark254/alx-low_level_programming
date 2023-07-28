#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: the pointer to the node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%f] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	return (c);
}
