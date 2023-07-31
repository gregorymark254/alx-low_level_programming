#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list
 * @h: pointer to a node
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
