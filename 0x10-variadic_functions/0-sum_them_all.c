#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum up arguments
 *@n: first parameter
 *
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int x, sum = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		sum += x;
		i++;
	}
	va_end(args);
	return (sum);
}
