#include "main.h"
/**
 *puts2 - print every other character
 *@str: pointer to string
 *
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
		j = j + 1;
	}
	_putchar('\n');
}
