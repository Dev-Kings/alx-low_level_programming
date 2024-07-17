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
 * advanced_binary_recursive - Recursively searches a value in array of
 * integers using binary search algorithm
 * @array: Pointer to first element of the array to search
 * @left: The starting index of subarray to search
 * @right: The ending index of the subarray to search
 * @value: Value to search for
 *
 * Return: The first index where value is located else -1
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, left, mid, value));
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: Pointer to first element of the array to search
 * @size: Number of elemnts in array
 * @value: Value to search for
 *
 * Return: index where value is located, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
