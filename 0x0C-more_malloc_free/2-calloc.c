#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory
 *@nmemb: elments in array
 *@size: size of each array element
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s;

	s = malloc(size * nmemb);
	if (!s || !size || !nmemb)
		return (0);
	return (s);
}
