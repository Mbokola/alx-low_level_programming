#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare strings s1 and s2
 * @s1: copy destination
 * @s2: source of string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
