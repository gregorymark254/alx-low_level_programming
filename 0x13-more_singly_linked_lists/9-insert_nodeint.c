#include "lists.h"

/**
 * insert_nodeint_at_index - entry point of a node
 * @head: pointer to the node
 * @idx: indexto a node
 * @n: number to be added to a node
 * Return: new node at a specific index
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *currentnode = *head, *prevnode = NULL, *newnode;
	unsigned int c;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	for (c = 0; c < idx && currentnode != NULL; c++)
	{
		prevnode = currentnode;
		currentnode = currentnode->next;
	}
	if (c < idx)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = currentnode;
	if (prevnode == NULL)
		*head = newnode;
	else
		prevnode->next = newnode;

	return (newnode);
}
