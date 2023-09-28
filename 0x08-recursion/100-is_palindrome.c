#include "main.h"

int checkIfPalindrome(char *s, int leftIndex, int rightIndex);

/**
 * is_palindrome - checks whether string
 * is palindrome
 *
 * @s: the string to be checked
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (sizeof(*s) == 1)
	{
		return (1);
	}
	return (checkIfPalindrome(s, 0, sizeof(*s) - 1));
}

/**
 * checkIfPalindrome - checks if string is palindrome
 *
 * @s: the string
 * @leftIndex: leftIndex of string
 * @rightIndex: right index of string
 *
 * Return: 1 is palindrome, 0 if not
 */

int checkIfPalindrome(char *s, int leftIndex, int rightIndex)
{
	if (leftIndex < 0 || rightIndex < 0)
	{
		return (0);
	}
	if (leftIndex >= rightIndex)
	{
		return (1);
	}
	if (s[leftIndex] == s[rightIndex])
	{
		return (checkIfPalindrome(s, leftIndex + 1, rightIndex - 1));
	}
	return (0);
}
