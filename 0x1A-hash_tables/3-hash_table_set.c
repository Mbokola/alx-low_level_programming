#include "hash_tables.h"

/**
 * hash_table_set - adds and element to the hash table
 * @ht: the new hash table to be added
 * @key: is the key
 * @value: that will be store in the table
 *
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node_to_add;
	char *new_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node_to_add = malloc(sizeof(hash_node_t));
	if (node_to_add == NULL)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(node_to_add);
		return (0);
	}
	node_to_add->key = strdup(key);
	node_to_add->value = new_value;
	node_to_add->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node_to_add;
	}
	else
	{
		node_to_add->next = ht->array[index];
		ht->array[index] = node_to_add;
	}
	return (1);
}
