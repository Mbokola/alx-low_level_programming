#include "main.h"
/**
 *_strspn - find prefix substring of @s in @accept
 *@s: pointer to s
 *@accept: pointer to f
 *Return: unsigned integer count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	unsigned int i, j;

	for (i = 0; s[i] != '\0' && count > i; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				count++;
	}
	return (count - 1);
}
