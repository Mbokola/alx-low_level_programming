#include "main.h"
/**
 *_memcpy - copy memory area @src
 *@dest: pointer to char buffer
 *@src: pointer to buffer2
 *@n: Characters to be copied
 *Return: dest after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
