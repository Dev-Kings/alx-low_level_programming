#include "main.h"

/**
 * factorial - computes factorial of a number
 *
 * @n: The input number
 *
 * Return: the factorial of number
 */

int factorial(int n)
{
	int f = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}	
