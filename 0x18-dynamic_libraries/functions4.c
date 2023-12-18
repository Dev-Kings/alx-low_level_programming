#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to copy of string
 * @src: pointer to string to be copied
 * Return: pointer to copy of string.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * _strcat - concats 2 strings
 * @dest: pointer to concatenated string.
 * @src: pointer to string to be concatenated.
 * Return: pointer to concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
