#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocate range memory
 *@min: minimum range
 *@max: maximum range
 *Return: pointer to allocated memory and range values
 */
int *array_range(int min, int max)
{
	int *s, *p, a;

	if (min > max)
		return (0);
	a = (max - min) + 1;
	s = malloc(sizeof(int) * a);
	if (!s)
		return (0);
	p = s;

	while (p != s + a)
		*p++ = min++;
	return (s);
}
