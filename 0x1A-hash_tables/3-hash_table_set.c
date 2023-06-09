#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table.
 *@ht: the hash table
 *@key: key to insert
 *@value:value to inset
 *
 *Return: 1 if succesful 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *ptr = NULL;
	char *k = (char *)key;
	const unsigned char *k2 = (const unsigned char *)key;
	char *val = (char *)value;
	unsigned  long int index;

	if (!key || !ht || !strlen(key))
		return (0);
	index = hash_djb2(k2) % ht->size;
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(k);
	node->value = strdup(val);
	ptr = ht->array[index];
	if (!ptr)
	{
		node->next = ptr;
		ht->array[index] = node;
	}
	else
	{
		node->next = ptr;
		ht->array[index] = node;
	}
	return (1);
}
