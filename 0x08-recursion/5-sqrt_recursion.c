#include "main.h"
int _sqrt(int j, int i);
/**
 *_sqrt_recursion - gets square root of @n
 *@n: parameter
 *Return: square root of n or -1 if none
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - calculates square root of @j
 *@j: parameter
 *@i: iterator
 *Return: square root of @j or -1 if none
 */
int _sqrt(int j, int i)
{
	if (i * i == j)
		return (i);
	if (i == j || j < 1)
		return (-1);
	return (_sqrt(j, i + 1));
}
