#include "main.h"

/**
 * flip_bits - finds the number of bits you would need to flip to
 * get from one number to another
 * @n: number to flip
 * @m: number to get to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int xor;

	count = 0;
	xor = n ^ m;
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
