#include "hash_tables.h"

/**
 * shash_table_create - creates the shash_table.
 * size: Size of the table.
 *
 * Return: hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * create_node - creates a node.
 * @key: Key of node.
 * @value: Value of node.
 *
 * Return: Node created or NULL.
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);
	node->value = strdup(value);
	if (node->value == NULL)
		return (NULL);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_table_set - sets the key, value in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key.
 * @value: The value.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *prev, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	prev = NULL;

	while (current != NULL && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	if (prev == NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		prev->next = new_node;
		new_node->next = current;
	}

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (ht->stail == NULL)
			ht->stail = new_node;
	}
	else
	{
		current = ht->shead;

		while (current->snext != NULL && strcmp(key, current->snext->key) > 0)
		{
			current = current->snext;
		}

		new_node->next = current->snext;
		new_node->sprev = current;
		if (current->snext != NULL)
			current->snext->sprev = new_node;
		current->snext = new_node;
		if (current == ht->stail)
			ht->stail = new_node;
	}

	return (1);
}

/**
 * shash_table_get - get value of a key.
 * @ht: The hash table.
 * @key: The key.
 *
 * Return: Value of associated key, else NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: Pointer to the hash table.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("'%s':'%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: Pointer to the hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
