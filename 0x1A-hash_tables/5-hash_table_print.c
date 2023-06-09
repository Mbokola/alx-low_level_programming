/* Write a function that prints a hash table.


You should print the key/value in the order that they appear in the array of hash table
Order: array, list
Format: see example
If ht is NULL, don’t print anything */
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

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ht->array[i + 1] && print)
			printf(", ");
		if (!ptr)
			continue;
		while (ptr)
		{
			printf("'%s' : '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			if (ptr)
				printf(", ");
			print++;
		}
	}
	printf("}\n");
}
