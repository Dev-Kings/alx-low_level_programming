#include "main.h"

/**
 * _strpbrk - finds first occurence of any character in a specified set of \
 * characters within a given string.
 * @s: pointer to string
 * @accept: set of characters
 * Return: pointer to the first occurence of character in s, else NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *original_accept = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = original_accept;
		s++;
	}
	return (NULL);
}

/**
 * _strstr - finds first occurence of substring within a given string.
 * @haystack: pointer to string to be searched
 * @needle: pointer to substring to search for
 * Return: pointer to first occurence of substring in string, else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
