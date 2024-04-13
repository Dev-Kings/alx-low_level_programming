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
	unsigned long int index;
	hash_node_t *new_node, *current_ht_index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_ht_index = ht->array[index];

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = NULL;

	/* Check if slot is empty */
	if (current_ht_index == NULL)
	{
		/* Create a node for the ky/value */
		current_ht_index = new_node;
	}
	else
	{
		new_node->next = current_ht_index;
		current_ht_index = new_node;
	}
	return (1);
}
