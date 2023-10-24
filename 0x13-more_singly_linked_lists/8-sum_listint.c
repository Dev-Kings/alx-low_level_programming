#include "lists.h"

/**
 * sum_listint - sums integers of a linked list nodes
 * @head: pointer to first node
 *
 * Return: sum of integers in nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	while (head)
	{
		temp = head;
		if (head->n)
		{
			sum += head->n;
		}
		head = temp->next;
	}
	return (sum);
}
