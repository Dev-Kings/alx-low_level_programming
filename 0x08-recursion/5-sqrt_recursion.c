#include "main.h"

/**
 * _sqrt_recursion - finds square root of a number
 *
 * @n: The number
 * @i: 0 passed to _sqrt_recurse function
 *
 * Return: square root
 */

int _sqrt_recurse(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recurse(n, 0));
}

/**
 * _sqrt_recurse - finds natural sqrt of a number
 *
 * @n: number to find square root
 * @i: counter to be incremented
 *
 * Return: the square root
 */

int _sqrt_recurse(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recurse(n, i + 1));
}
