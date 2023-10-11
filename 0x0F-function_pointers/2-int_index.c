#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: pointer to array to be searched
 * @size: array size
 * @cmp: pointer to function
 *
 * Return: index of element matching condition, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}

