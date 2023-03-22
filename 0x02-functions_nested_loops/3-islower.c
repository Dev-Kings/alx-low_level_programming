#include "main.h"

/**
 * _islower - checkes lowercase letters
 * @c: character checked
 * Return: 1 for lowercase and 0 for any other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
