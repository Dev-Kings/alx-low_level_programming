#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference bwteen two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds quotient of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of division of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of divison
 */
int op_mod(int a, int b)
{
	return (a % b);
}
