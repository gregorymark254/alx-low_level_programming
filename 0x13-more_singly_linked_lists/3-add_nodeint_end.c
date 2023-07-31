#include "lists.h"

/**
* add_nodeint_end - start point of a node
* @head: pointer to node
* @n: number of node
* Return: node at the end
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
