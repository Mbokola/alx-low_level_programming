#include "hash_tables.h"

/**
 *hash_table_create - creates the hash table
 *@size: size of hash table
 *
 *Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
