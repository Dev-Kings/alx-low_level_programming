#include "lists.h"

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: double pointer to head
 * @n: integer to be added
 *
 * Return: address of new element or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
