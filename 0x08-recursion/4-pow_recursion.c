#include "main.h"

/**
 * _pow_recursion -computes x power y
 *
 * @x: The base integer
 * @y: The power to be raised
 *
 * Return: the integer value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
