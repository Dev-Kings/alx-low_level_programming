#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of associated key from hash table.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: value of the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_ht_index;

	index = key_index((unsigned const char *)key, ht->size);
	current_ht_index = ht->array[index];

	if (current_ht_index == NULL)
		return (NULL);

	if (current_ht_index->key == NULL || current_ht_index->value == NULL)
		return (NULL);

	if (strcmp(current_ht_index->key, key) == 0)
	{
		return (current_ht_index->value);
	}
	return ("NA");
}
