#include "main.h"

/**
 * _strlen_recursion - Returns the length of string
 *
 * @s: The string to be computed
 *
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int current = 0;

	if (*s)
	{
		current++;
		current += _strlen_recursion(s + 1);
	}
	return (current);
}
