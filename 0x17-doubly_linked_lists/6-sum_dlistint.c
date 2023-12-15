#include "lists.h"

/**
 * sum_dlistint - sums all the data in a doubly linked list
 * @head: pointer to the first node
 *
 * Return: sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int summation;

	current = head;
	summation = 0;
	if (current == NULL)
		return (summation);
	while (current != NULL)
	{
		summation += current->n;
		current = current->next;
	}
	return (summation);
}
