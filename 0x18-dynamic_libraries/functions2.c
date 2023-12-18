#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: ASCII unsigned integer cast of the character
 * Return: 1 if alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _abs - gets absolute value of an integer.
 * @n: integer
 * Return: absoulte value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1 * n));
	}
	else
		return (n);
}

/**
 * _isdigit - checks if a character is a digit.
 * @c: ASCII unsigned integer cast of the character
 * Return: 1 if digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
