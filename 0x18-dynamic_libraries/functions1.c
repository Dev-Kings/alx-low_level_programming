#include "main.h"

/**
 * _putchar - writes output to stdout.
 * @c: character to write
 *
 * Return: unisgned int cast of character, or -1 on failure.
 */
int _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _islower - checks whether a character cast to int is lowercase
 * @c: ASCII unisgned int cast of character
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isupper - checks whether a character cast to int is uppercase
 * @c: ASCII unsigned int cast of character
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
