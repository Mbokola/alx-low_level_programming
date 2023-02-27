#include "main.h"
/**
 *rev_string - reverses a string
 *@s: pointer to string
 *
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i - j > 0; i--)
	{
		c = s[j];
		s[j++] = s[i];
		s[i] = c;
	}
}
