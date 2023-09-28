#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string
 *@c: The character to be passed
 *
 * Return: String
 */

void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
	{
		_putchar('\n');
	}
}
