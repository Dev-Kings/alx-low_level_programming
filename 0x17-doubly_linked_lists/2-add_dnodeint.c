#include "lists.h"

/**
 * add_dnodeint - adds a node at beginning of a linked list
 * @head: pointer to the head node
 * @n: value to be added at new node
 *
 * Return: address of new element if successful, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (current == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = current;
		current->prev = new;
	}
	*head = new;
	return (new);
}
