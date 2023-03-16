#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concactecate two strings
 *@s1: First string
 *@s2: Second string
 *@n: Chars from s2
 *Return: pointer to allocated memory with new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *a, *b;
	unsigned int i = 0, len = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + len++))
		;
	while (*(s2 + len2++))
		;
	if (n >= len2)
		n = len2 - 1;
	s = malloc(sizeof(char) + len + n - 1);
	if (!s)
		return (0);

	a = s1;
	b = s;

	while (*a)
		*b++ = *a++;
	a = s2;

	while (i++ < n)
		*b++ = *a++;
	*b = 0;
	return (s);
}
