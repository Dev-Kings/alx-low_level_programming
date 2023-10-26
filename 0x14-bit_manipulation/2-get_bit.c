#include "main.h"

/**
 * get_bit - finds value of a bit at given index
 * @n: base10 of the number
 * @index: bit at position
 *
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
