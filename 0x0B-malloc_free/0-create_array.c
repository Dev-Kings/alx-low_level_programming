#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of size size,
 * and initializes with char c
 *
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to array if successfull,
 * NULL if not
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

