#include "lists.h"

/**
  * print_listint - print elements of linked list
  * @h: first node
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		c++;
		ptr = ptr->next;
	}

	return (c);
}
