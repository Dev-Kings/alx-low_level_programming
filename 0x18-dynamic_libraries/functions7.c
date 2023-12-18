#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strchr - finds first occurence of character in string.
 * @s: pointer to string.
 * @c: character to find.
 * Return: pointer to first occurence of character, else NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
