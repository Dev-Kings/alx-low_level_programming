#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located, else NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_index, i;
	listint_t *prev, *current;

	if (!list || size == 0)
		return (NULL);

	step = (size_t) sqrt((double) size);
	prev = list;
	current = list;

	while (current->index < size && current->n < value)
	{
		prev = current;
		prev_index = current->index;
		for (i = 0; current->next && i < step; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value || !current->next)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev_index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
