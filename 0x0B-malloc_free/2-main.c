#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("Failed to allocate memory.\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
