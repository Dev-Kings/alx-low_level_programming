#include "main.h"

/**
 * _strncat - concats 2 strings upto maximum number of characters n.
 * @dest: pointer to concatenated string
 * @src: pointer to string to be added
 * @n: maximum number of characters to concatenate from src.
 * Return: pointer to concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_index = 0;
	int dest_index = 0;

	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}
	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}

/**
 * _strncpy - copies a string upto maximum number of characters n.
 * @dest: pointer to copy of string
 * @src: pointer to string to be copied
 * @n: maximum number of characters to be copied.
 * Return: pointer to string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
