#include "lists.h"

/**
 * listint_len - returns number of elements in a
 * linked list
 * @h: pointer to head
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
