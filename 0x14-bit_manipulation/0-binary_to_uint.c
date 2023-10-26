#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string
 *
 * Return: value to base10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i;

	if (b == NULL)
		return (0);
	dec = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = dec * 2 + (b[i] - '0');
	}
	return (dec);
}
