#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char arr[] = {',', ';', '.', '!', '?', '"', '(', ')', ' ', '\t', '\n', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (str[i] == arr[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
				else
					continue;
			}
		}
	}
	return (str);
}
