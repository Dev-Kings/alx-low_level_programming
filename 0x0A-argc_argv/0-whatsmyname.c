#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 *
 * @argc: count of arguments
 * @argv: array of pointer to arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
