#include "lists.h"

/**
 * sum_listint - calculate the sum
 * @head: pointer to the node
 * Return: sum of value
*/

int sum_listint(listint_t *head)

{
	listint_t *headnode = head;
	int c = 0;

	if (head == NULL)
		return (0);

	while (headnode != NULL)
	{
		c += headnode->n;
		headnode = headnode->next;
	}
	return (c);
}
