#include "main.h"
/**
 * _pow_recursion - calculate power raised to @y
 * @x: input one
 * @y: input two
 * Return: power
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
