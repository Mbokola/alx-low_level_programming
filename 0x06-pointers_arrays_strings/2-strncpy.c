#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy src string to dest upto n
 * @dest: copy destination
 * @src: source of string
 *@n: string limit to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
