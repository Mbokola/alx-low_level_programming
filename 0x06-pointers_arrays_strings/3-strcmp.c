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
	int i = 0;
	int a, b, c;

	while (s1[i] || s2[i])
	{
		a = s1[i];
		b = s2[i];
		c = a - b;
		if (c == 0)
		{
			i++;
			continue;
		}
		else if ((a == 0 && b > 0) || (a > 0 && b == 0))
		{
			c = 1;
			break;
		}
		else
			break;
	}
	return (c);
}
