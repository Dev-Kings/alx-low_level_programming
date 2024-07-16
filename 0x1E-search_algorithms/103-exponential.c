#include "search_algos.h"

/**
 * print_array - prints the array being searched
 * @array: Pointer to first element of array to search
 * @left: Left boundary of array
 * @right: Right boundary of array
 *
 * Return: Nothing.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}


/**
 * bin_search - searches a value in array of integers using binary
 * search algorithm
 * @array: Pointer to first element of the array to search
 * @left: The starting index of the subarray to search
 * @right: The ending index of the subarray to search
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches a value in a sorted array of intgers using
 * Exponential search algorithm
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, right;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				bound, array[bound]);
		bound *= 2;
	}

	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, right);

	return (bin_search(array, bound / 2, right, value));
}
