#include "lists.h"

/**
* free_listint2 - free a list on the node
* @head: pointer to the node
* Return: null or address
*/

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
