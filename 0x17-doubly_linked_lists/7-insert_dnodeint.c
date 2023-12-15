#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index.
 * @h: pointer to pointer to first node.
 * @idx: index to insert
 * @n: node value
 *
 * Return: address of new node, else NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int node_position;

	current = *h;
	node_position = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	while (current != NULL && node_position != idx)
	{
		node_position++;
		current = current->next;
	}
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	(current->prev)->next = new_node;
	current->prev = new_node;
	return (new_node);
}
