#include "main.h"

/**
 *binary_to_uint - converts string to unsigned int
 *@b: pointer to a string
 *
 *Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0, base = 2;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if  (b[i] == '1')
			sum = sum * base + 1;
		else if (b[i] == '0')
			sum = sum * base + 0;
		else
			return (0);
	}
	return (sum);
}
