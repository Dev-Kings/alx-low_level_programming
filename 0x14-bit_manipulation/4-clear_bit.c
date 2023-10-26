#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to number
 * @index: position of bit to be set
 *
 * Return: 1 if successfull, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
