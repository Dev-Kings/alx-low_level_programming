#include "main.h"

/**
 * _strspn - finds length of initial segment of string consisting of only characters \
 * part of another string.
 * @s: pointer to string.
 * @accept: pointer to strifng to match in s
 * Return: length of initial segment of s consisting of only characters found \
 * in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;
	char *original_accept = accept;
	
	while (*s != '\0')
	{
		match = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (!match)
		{
			break;
		}
		s++;
		accept = original_accept;
	}
	return (count);
}
