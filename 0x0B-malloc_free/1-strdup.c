#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory
 * @str: character
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int r;

	r = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);	
	}
	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		a[r] = str[r];
	}
	return (a);
}
