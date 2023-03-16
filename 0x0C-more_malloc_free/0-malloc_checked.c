#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 *@b: allocation size
 *Return: pointer to allocated memory or 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = (int *) malloc(b);
	if (s)
		return (s);
	else
		exit(98);
}
