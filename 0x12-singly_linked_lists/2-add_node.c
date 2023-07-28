#include "lists.h"

/**
 * *add_node - adds new node
 * @head: a pointer to a node
 * @str: string to a node
 * Return: null if fail or address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int c = 0;

	newnode = malloc(sizeof(list_t));

	while (str[c])
		c++;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->next = *head;
	newnode->len = c;
	*head = newnode;

	return (newnode);

}
