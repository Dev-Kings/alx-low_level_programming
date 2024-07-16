#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches a value in array of integers using
 * interpolation search algorithm
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[high] == array[low])
			break;
		/* Calculate the probe position */
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));

		/* Check if pos is out of range */
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
					pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
