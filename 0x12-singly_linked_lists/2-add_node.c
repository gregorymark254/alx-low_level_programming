#include "lists.h"

/**
 * *add_node - adds new node
 * @head: a pointer to a node
 * @str: string to a node
 * Return: null if fail or address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	int c = 0;

	add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
		return (NULL);

	while (str[c])
		c++;

	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);
	add_node->next = *head;
	add_node->len = c;
	*head = add_node;

	return (add_node);

}
