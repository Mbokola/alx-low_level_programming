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
	char *s, *i;

	if(!size || !nmemb)
		return (0);
	s = malloc(size * nmemb);
	if (!s)
		return (0);
	i = s;
	while (i != s + (nmemb * size))
		*i++ = 0;
	return (s);
}
