#include "main.h"
/**
 *get_bit - get bit at particular index
 *@n: number to be used
 *@index: location of binary digit
 *
 *return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	j = n >> index;

	if (j & 1)
		return (1);
	else
		return (0);
	return (-1);
}
