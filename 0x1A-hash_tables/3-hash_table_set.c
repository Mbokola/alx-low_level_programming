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
	hash_node_t *node = NULL;
	unsigned  long int index;

	if (!ht || !key || !strlen(key))
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup((char *)key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup((char *)value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
