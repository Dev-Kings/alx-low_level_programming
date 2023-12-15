#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index specified.
 * @head: pointer to first node.
 * @index: index of node to delete
 * Return: 1 if successful, else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int node_position;

	current = *head;
	node_position = 0;
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
			(current->next)->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && node_position != index)
	{
		node_position++;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
	{
		temp = current->next;
		temp->prev = current->prev;
		(current->prev)->next = temp;
		free(current);
	}
	else
	{
		temp = current->prev;
		temp->next = NULL;
		free(current);
	}
	return (1);
}
