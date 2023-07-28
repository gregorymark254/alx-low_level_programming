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
	size_t c = 0;

	if (str == NULL)
		c = 0;

	while (str[c] != '\0')
		c++;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL)
	if (*head == NULL)
		add_node->next = NULL;
	else
		add_node->next = *head;

	add_node->str = strdup(str);
	add_node->len = C;
	*head = add_node;

	return (*head);
}
