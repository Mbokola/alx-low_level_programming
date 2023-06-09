#include "hash_tables.h"
/**
 *hash_table_print - prints the hash table
 *@ht: pointer to the table
 *
 *Return Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, print = 0;
	hash_node_t *ptr = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				if (print)
					printf(", ");
				printf("'%s' : '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				print++;
			}
		}
		printf("}\n");
	}
}
