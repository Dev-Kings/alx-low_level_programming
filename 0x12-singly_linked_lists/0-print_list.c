#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements on alist
 * @h: pointer to head
 * Return: Number of list nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		size++;
	}
	return (size);
}
