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

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
