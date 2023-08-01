#include "lists.h"

/**
* delete_nodeint_at_index - entry point of node
* @head: pointer to the node
* @index: index to the node
* Return: null or address
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *currentnode = *head, *prevnode = NULL, *tmp = *head;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (c = 0; c < index && currentnode != NULL; c++)
	{
		prevnode = currentnode;
		currentnode = currentnode->next;
	}
	if (c != index)
		return (-1);
	prevnode->next = currentnode->next;
	free(currentnode);
	return (1);

}
