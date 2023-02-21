#include "main.h"

/**
 *_isalpha - check for lowercase
 *@c: function parameter
 *Return: 0 if uppercase 1 if lowercase
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
