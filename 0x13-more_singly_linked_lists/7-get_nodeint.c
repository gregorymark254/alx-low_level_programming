#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node
 * @head: Pointer to the node
 * @index: Desired node
 * Return: Pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int c;

	for (c = 0; c < index ; c++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
