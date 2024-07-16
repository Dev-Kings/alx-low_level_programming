#include "search_algos.h"

/**
 * linear_search - searches a value in array of integers using linear
 * search algorithm
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
