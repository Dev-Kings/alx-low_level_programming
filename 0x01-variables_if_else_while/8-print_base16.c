#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char h;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');

	return (0);
}
