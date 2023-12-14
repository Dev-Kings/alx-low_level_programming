#include "lists.h"

/**
 * dlistint_len - counts number of elements in a doubly linked list
 * @h: pointer to first node of the linked list
 *
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *current;

	current = h;
	node_count = 0;
	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}
