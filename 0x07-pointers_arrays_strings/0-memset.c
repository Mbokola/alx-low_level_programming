#include "main.h"
/**
 *_memset - fill memory with @b
 *@s: pointer to char buffer
 *@b: character for replacing
 *@n: Characters to be replaced
 *Return: s after replacing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
