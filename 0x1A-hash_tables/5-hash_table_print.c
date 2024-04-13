#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	int first_comma = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (!first_comma)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			first_comma = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
