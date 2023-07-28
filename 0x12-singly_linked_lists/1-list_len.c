#include "lists.h"

/**
 * list_len - Gets the number of nodes
 * @h: pointer to the  node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t c = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;

		c++;
	}

	return (c);
}
