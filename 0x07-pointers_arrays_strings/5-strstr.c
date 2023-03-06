#include "main.h"
/**
 *_strstr - finds substring
 *@haystack: pointer to s
 *@needle: string to be found
 *Return: s + count if found NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] != needle[j])
			{
				count++;
				break;
			}
			else
				i++;
		if (needle[j] == '\0')
			return (haystack + count);
	}
	return ('\0');
}
