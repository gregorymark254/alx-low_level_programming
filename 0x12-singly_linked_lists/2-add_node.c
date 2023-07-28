#include "lists.h"

/**
 * add_node - adds a node
 * @head: pointer to the node
 * @str: string to add a node
 * Return: NULL if it fails or address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t c = 0;

	if (str == NULL)
		c = 0;

	while (str[c] != '\0')
		c++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = c;
	*head = new_node;

	return (*head);
}
