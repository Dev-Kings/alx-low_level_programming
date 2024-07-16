#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches a value in array of integers using jump
 * search algorithm
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				prev, array[prev]);
		prev += step;
	}

	i = prev - step + 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev - step, prev);

	i -= 1;
	while (i < size && i <= prev && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				i, array[i]);
		i++;
	}

	if (i < size && array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
