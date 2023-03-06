#include "main.h"
#include <stddef.h>
/**
 *_strchr - Locate char c in @s
 *@s: pointer to pointer f
 *@c: character to be located
 *Return: s + i if found NULL if not
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
