#include "lists.h"

/**
 * free_list - frees a list
 * @head:linked list to be freed
 * Return: Nothing (0)
 */

void free_list(list_t *head)

{
	list_t *c;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		c = head->next;
		free(head->str);
		free(head);
		head = c;
	}
}
