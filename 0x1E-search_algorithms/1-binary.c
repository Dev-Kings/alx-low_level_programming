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
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}


/**
 * binary_search - searches a value in array of integers using binary
 * search algorithm
 * @array: Pointer to first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

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
