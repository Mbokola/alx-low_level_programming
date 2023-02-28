#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string to other
 * @dest: copy destination
 * @src: source of string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; i != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
