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
	int a;
	int b;
	int c;

	a = s1[0];
	b = s2[0];
	c = a - b;
	return (c);
}
