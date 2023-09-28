#include "main.h"

int str_comparator(char *s1, char *s2, int i, int j);

/**
 * wildcmp - compares if strings are identical
 *
 * @s1: address of string
 * @s2: address of string
 *
 * Return: 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	return (str_comparator(s1, s2, 0, 0));
}

/**
 * str_comparator - compares strings
 *
 * @s1: first string address
 * @s2: second string address
 * @i: left index first string
 * @j: left index second string
 */

int str_comparator(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (str_comparator(s1, s2, 1 + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (str_comparator(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (str_comparator(s1, s2, i + 1, j) || 
				str_comparator(s1, s2, i, j + 1));
	}
	return (0);
}
