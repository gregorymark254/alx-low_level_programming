#include "lists.h"

/**
 * add_node_end - adds a node at the end
 * @head: pointer to a node
 * @str: string to add a node
 * Return: NULL if it fails or address
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *add_node_end, *end;
	size_t c = 0;

	if (str == NULL)
		c = 0;

	while (str[c] != '\0')
		c++;

	add_node_end = malloc(sizeof(list_t));
	if (add_node_end == NULL)
		return (NULL);

	add_node_end->str = strdup(str);
	add_node_end->len = c;
	add_node_end->next = NULL;

	end = *head;

	if (end == NULL)
		*head = add_node_end;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = add_node_end;
	}

	return (*head);
}
