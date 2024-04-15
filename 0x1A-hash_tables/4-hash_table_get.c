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

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);
	current_ht_index = ht->array[index];

	if (current_ht_index == NULL)
		return (NULL);

	if (current_ht_index->key == NULL || current_ht_index->value == NULL)
		return (NULL);

	while (current_ht_index != NULL)
	{
		if (strcmp(current_ht_index->key, key) == 0)
		{
			if (current_ht_index->value == NULL)
				return (NULL);
			return (current_ht_index->value);
		}
		current_ht_index = current_ht_index->next;
	}
	return (NULL);
}
