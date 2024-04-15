#include "hash_tables.h"

/**
 * create_node - creates a new hash node.
 * @key: The key for the node.
 * @value: The value for the node.
 *
 * Return: Pointer to the new hash node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *current_ht_index;
	char *value_copy;

	current_ht_index = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (current_ht_index == NULL)
		return (NULL);

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(current_ht_index);
		return (NULL);
	}

	current_ht_index->key = strdup(key);
	if (current_ht_index->key == NULL)
	{
		free(value_copy);
		free(current_ht_index);
		return (NULL);
	}
	current_ht_index->value = value_copy;
	current_ht_index->next = NULL;

	return (current_ht_index);
}

/**
 * handle_collision - handles key collision on same index by appending
 *  new node to the list.
 *  @head: Pointer to head of hash node in list.
 *  @key: The key for the new node.
 *  @value: The value for the new node.
 *
 *  Return: 1 on success, 0 on failure.
 */
int handle_collision(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *current_ht_index;

	if (head == NULL || key == NULL || value == NULL)
		return (0);

	/* Create a new node */
	current_ht_index = create_node(key, value);
	if (current_ht_index == NULL)
		return (0);

	/* Append new node at beginning of list */
	current_ht_index->next = *head;
	*head = current_ht_index;

	return (1);
}


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
	hash_node_t *current_ht_index;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_ht_index = ht->array[index];

	/* Check if slot is empty */
	if (current_ht_index == NULL)
	{
		/* Create a node for the ky/value */
		ht->array[index] = create_node(key, value);
		return (ht->array[index] != NULL);
	}

	while (current_ht_index != NULL)
	{
		if (strcmp(current_ht_index->key, key) == 0)
		{
			/* Update value */
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			free(current_ht_index->value); /* Free old value */
			current_ht_index->value = value_copy; /* Assign new value */
			return (1);
		}
		current_ht_index = current_ht_index->next;
	}

	return (handle_collision(&current_ht_index, key, value));
}
