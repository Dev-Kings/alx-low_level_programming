#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "cisfun", "cool");
	hash_table_set(ht, "hetairas", "Hate not");
	hash_table_set(ht, "mentioner", "Mention");
	/* hash_table_set(ht, "Don't forget to tweet today", "X"); */
	return (EXIT_SUCCESS);
}
