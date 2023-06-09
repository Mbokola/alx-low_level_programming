#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *save_link, *ptr = NULL;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				save_link = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = save_link;
			}
		}
		free(ht->array);
		free(ht);
	}
}
