#include "main.h"

/**
 *_abs - check for sign
 *@n: function parameter
 *Return: 0 if 0, 1 if positive, -1 if negative
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = 0 - n;
		return (n);
	}
	else
		return (n);
}
