#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s;

	for (i = '0'; i < '9'; i++)
	{
		for (s = i + 1; s <= '9'; s++)
		{
			if (s != i)
			{
				putchar(i);
				putchar(s);
				if (i == '8' && s == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
