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
	int bits = (n * 8) - 2;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	for (j = 0; dest[j] != '\0'; j++)
	{
		if (j == bits)
		{
			dest[j + 1] = '\0';
		}
	}
	return (dest);
}
