#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;
	int j;
	for (i = 0; n[i] != '\0'; i++)
	{
		j = n[i];
		if (j > 90 && j < 123)
			j = j - 32;
		n[i] = j;
	}
		return (n);
}
