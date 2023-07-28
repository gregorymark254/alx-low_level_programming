#include "lists.h"

/**
 * add_node - Adds a node
 * @head: pointer to the node
 * @str: string to add to new node
 * Return: null if fail or address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t c = 0;

	if (str == NULL)
		c = 0;

	while (str[c] != '\0')
		c++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL)
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	node->str = strdup(str);
	node->len = C;
	*head = node;

	return (*head);
}
