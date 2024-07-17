#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, else NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (!list)
		return (NULL);

	current = list;
	while (current->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);
		if (current->express->n >= value)
			break;
		current = current->express;
	}

	prev = current;

	if (current->express && current->express->n >= value)
	{
		current = current->express;
	}
	else
	{
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
			current->index);

	current = prev;

	while (current && current->index <= prev->express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index,
				current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
