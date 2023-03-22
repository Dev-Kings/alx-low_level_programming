#include "main.h"

/**
 * _isalpha - checks for alpha characters
 * @c: character checked
 * Return: 1 if alpha, 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
