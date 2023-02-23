#include "main.h"
/**
 * _isdigit - check whether char is digit
 *@c: integer parameter
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isdigit(int c)
{
	char r = c;

	if (r <= '9' && r >= '0')
		return (1);
	else
		return (0);
}
