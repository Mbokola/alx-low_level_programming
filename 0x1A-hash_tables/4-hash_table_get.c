#include "hash_tables.h"
/**
 *hash_table_get - gets value associated with key
 *@ht: hash table
 *@key: key to get
 *
 *Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(key, ptr->key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
