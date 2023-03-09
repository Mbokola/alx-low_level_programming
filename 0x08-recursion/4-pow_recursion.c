#include "main.h"
/**
 *_sqrt_recursion - gets square root of @n
 *@n: parameter
 *Return: square root of n or -1 if none
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
