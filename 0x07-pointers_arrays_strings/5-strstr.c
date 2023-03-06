#include "main.h"
#include <stdio.h>
/**
 *_strstr - finds substring
 *@haystack: pointer to s
 *@needle: string to be found
 *Return: s + count if found NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
