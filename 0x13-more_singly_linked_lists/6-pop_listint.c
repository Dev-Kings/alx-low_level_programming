#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: double pointer to head node
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
