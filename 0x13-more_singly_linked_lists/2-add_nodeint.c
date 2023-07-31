#include "lists.h"

/**
* add_nodeint - starting point of node
* @head: pointer to node
* @n: number of node
* Return: null or address
*/

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
