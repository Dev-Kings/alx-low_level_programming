#include <stdarg.h>

/**
 * sum_them_all - sums integers
 * @n: argument count
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list lst;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}

