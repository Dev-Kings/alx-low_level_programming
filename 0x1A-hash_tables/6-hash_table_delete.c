#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node, *temp_node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			temp_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = temp_node;
		}
	}

	free(ht->array);
	free(ht);
}
