#include "hash_tables.h"

/**
 *key_index - returns the index of a key
 *@key: The key to retrieve index
 *@size: Size of hash table
 *
 *Return: Index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
