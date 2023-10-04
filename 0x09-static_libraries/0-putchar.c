#include <unistd.h>
/**
 * _putchar - writes the character c to stdo
 * @c: The character to prin
 * Return: On succes
 * On error, -1 is returned, and errno is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
