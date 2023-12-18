#include "main.h"

/**
 * _strlen - counts the length of a string.
 * @s: pointer to string
 * Return: string length.
 */
int _strlen(char *s)
{
	int counter;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}

/**
 * _puts - writes to standard output.
 * @s: pointer to string
 * Return: Nothing.
 */
void _puts(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		write(1, &s[index], 1);
		index++;
	}
}

/**
 * _atoi - converts string to integer.
 * @s: pointer to string
 * Return: integer value of the string, else 0.
 */
int _atoi(char *s)
{
	int result = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		result = result * 10 + (s[i] - '0');
	}
	return (result);
}
