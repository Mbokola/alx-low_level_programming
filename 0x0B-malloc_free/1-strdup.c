#include <stdlib.h>
#include <string.h>
/**
 *_strdup - duplicates string
 *@str: pointer to string
 *Return: Array of charcters
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (!str)
		return (0);
	s = malloc(sizeof(char) * (strlen(str) + 1));
	if (s == 0)
		return (0);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = str[i];
	return (s);
}
