#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: pointer to head
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
