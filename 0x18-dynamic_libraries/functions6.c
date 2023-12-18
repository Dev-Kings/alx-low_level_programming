#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal, negative value if s1 is less than s2,
 * positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to memory area
 * @b: value to fill at memory
 * @n: number of bytes to set
 * Return: pointer to memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		ptr[index] = b;
	}
	return (s);
}
