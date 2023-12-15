#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of a doubly linked list
 * @head: pointer to pointer of head node
 * @n: value to add at new node
 *
 * Return: address of new element if successful, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;

	return (new);
}
