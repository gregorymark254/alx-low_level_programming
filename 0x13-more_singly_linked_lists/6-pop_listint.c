#include "lists.h"
/**
 * pop_listint - removes the first element of a linked list
 * @head: pointer to the node
 * Return: The number of the node
 */

int pop_listint(listint_t **head)

{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
