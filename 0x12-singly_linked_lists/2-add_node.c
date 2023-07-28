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

	addnode = malloc(sizeof(list_t));

	while (str[c])
		c++;

	if (addnode == NULL)
		return (NULL);

	addnode->str = strdup(str);
	addnode->next = *head;
	addnode->len = c;
	*head = newnode;

	return (addnode);

}
