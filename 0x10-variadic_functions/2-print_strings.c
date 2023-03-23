#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints a string
 *@separator: separator
 *@n: number of arguments
 *
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;
	char *x;

	va_start(args, n);
	i = n;
	if (n)
	{
		while (i)
		{
			x = va_arg(args, char *);
			if (!(*x))
				printf("%s", "(nil)");
			if (separator && i)
			{
				printf("%s", x);
				if (i != 1)
					printf("%s", separator);
			}
			i--;
		}
		printf("\n");
		va_end(args);
	}
}
