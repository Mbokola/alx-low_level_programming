#include "main.h"
/**
 *_strchr - finds any similar character
 *@s: pointer to pointer f
 *@accept: string to be used
 *Return: s + i if found NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (0);
}
