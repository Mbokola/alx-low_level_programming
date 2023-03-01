#include "main.h"
/**
 *_strncat - concatcecate src to dest observing size limit
 *@dest: destination string
 *@src: source string
 *@n: size limit in bytes
 *Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
		dest[i++] = src[j];
	return (dest);
}
