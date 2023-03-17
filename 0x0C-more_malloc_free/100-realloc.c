#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocate memory
 *@ptr: pointer to old size
 *@old_size: initial size
 *@new_size: latter size
 *Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *p, *a, *c;

	s = malloc(new_size);
	if (!s)
		return (0);
	p = ptr;
	a = s;
	c = ptr;

	if (new_size > old_size)
	{
		while (p != c + old_size)
			*a++ = *p++;
		free(ptr);
		return (s);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && !p)
	{
		free(ptr);
		return (0);
	}
	else
	{
		while (p != c + new_size)
			*a++ = *p++;
		free(ptr);
		return (s);
	}
}
