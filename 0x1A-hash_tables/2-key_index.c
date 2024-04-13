#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: The key
 * @size: Size of the array of the hash table
 *
 * Return: Index to store the ky/value in the array of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashedValue, hashedMod;

	hashedValue = hash_djb2(key);
	hashedMod = hashedValue % size;

	return (hashedMod);
}
