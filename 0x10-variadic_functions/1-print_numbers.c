#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: number separator
 *@n: Argument before elipsis
 *
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	i = n;
	while (i)
	{
		printf("%d", va_arg(args, int));
		if (i != 1 && separator)
			printf("%s", separator);
		i--;
	}
	printf("\n");
	va_end(args);
}
