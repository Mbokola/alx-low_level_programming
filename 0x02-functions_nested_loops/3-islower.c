#include "main"

/**
 *_islower - check for lowercase
 *@c: function parameter
 *Return: 0 if uppercase 1 if lowercase
 */

int _islower(int c)
{
	if (c <= 90)
		return (0);
	else
		return (1);
}
