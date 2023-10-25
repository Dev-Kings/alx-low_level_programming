#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to first node
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *current = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
}
