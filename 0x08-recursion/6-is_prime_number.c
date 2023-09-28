#include "main.h"

int prime(int n, int i);

/**
 * is-prime_number - checks whether number
 * is a prime number
 *
 * @n: the number being checked
 *
 * Return: 1 if prime number, 0
 * if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - computes if a number is prime recursively
 * 
 * @n: number to evaluate
 * @i: value to iterate
 *
 * Return: 1 if n is prime, 0 if not
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
