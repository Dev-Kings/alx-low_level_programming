#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table.
 * @ht: The hash table.
 * @key: The key to add.
 * @value: Value of the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashed_value, index;
	hash_node_t *current_ht_index;
	hash_node_t *node;

	hashed_value = hash_djb2((const unsigned char *)key);
	index = hashed_value % ht->size;
	current_ht_index = ht->array[index];

	/* Create a pointer to a table item */
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)malloc(strlen(key) + 1);
	node->value = (char *)malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);

	if (current_ht_index == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		/* Key exists, update the value */
		if (strcmp(current_ht_index->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			/* Collision detected */
			printf("Key in place is '%s'\n", ht->array[index]->key);
			printf("Collision detected\n");
			printf("Key coming is '%s'\n", key);
		}
		return (1);
	}
}
