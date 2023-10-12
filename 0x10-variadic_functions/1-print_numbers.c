#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: number spacer
 * @n: number count
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(lst, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(lst, int));
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(lst);
		printf("\n");
	}
}
