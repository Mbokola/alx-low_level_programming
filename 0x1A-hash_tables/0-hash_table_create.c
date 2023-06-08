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

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	return (table);
}
