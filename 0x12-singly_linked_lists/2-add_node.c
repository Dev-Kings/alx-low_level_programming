#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: pointer to the list_t list
 * @str: string to add to new node
 * Return: address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
