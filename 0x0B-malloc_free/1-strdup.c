#include <stdlib.h>
/**
 *_strdup - duplicates string
 *@str: pointer to string
 *Return: Array of charcters
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len = 0;

	if (!str)
		return (0);
	while (*(str + len++));
	s = malloc(sizeof(char) * len);
	if (s == 0)
		return (0);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = str[i];
	return (s);
}
