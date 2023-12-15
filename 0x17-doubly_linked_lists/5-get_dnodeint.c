#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list.
 * @head: pointer to first node
 * @index: position of node.
 *
 * Return: nth node, else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int node_position;

	node_position = 0;
	current = head;
	if (current == NULL)
		return (NULL);
	while (current != NULL && node_position != index)
	{
		node_position++;
		current = current->next;
	}
	if (current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
