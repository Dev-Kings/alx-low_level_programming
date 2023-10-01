#include <stdio.h>

/**
 * main - prints arguments paased to main
 *
 * @argc: number of arguments
 * @argv: array of pointer to arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	for(count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

