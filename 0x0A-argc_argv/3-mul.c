#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtointeger -converts string to integer
 *
 * @s: string received
 *
 * @Return: integer from string
 */

int strtointeger(char *s)
{
	int num = atoi(s);
	return num;
}

/**
 * main - multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int num1, num2, product;

	if (argc == 3)
	{
		num1 = strtointeger(argv[1]);
		num2 = strtointeger(argv[2]);

		product = num1 * num2;
		printf("%d\n", product);
	}
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
