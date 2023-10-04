#include "main.h"
/**
 * _isalpha - checks for alphabetic characte
 * @c: the character to be checke
 * Return: 1 if c is a letter, 0 otherwis
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
