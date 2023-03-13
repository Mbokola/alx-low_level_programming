#include <stdlib.h>
/**
 *create_array - function that creates an array of chars, and initializes it with a specific char.
 *@size:
 *@c: initializing char
 *Return: Array of charcters
 */


char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return (0);
	s = malloc(size * sizeof(char));
	if (s == 0)
		return 0;
	for (i = 0; i <= size; i++)
		s[i] = c;
	return (s);
}
