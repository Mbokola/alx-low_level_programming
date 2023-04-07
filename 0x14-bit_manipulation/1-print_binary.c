#include "main.h"
/**
 *print_binary - prints a number in binary
 *@n: number to print
 *
 *Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int rem = n;

	if (n >> 1)
	{
		rem = n & 1;
		print_binary(n >> 1);
	}
	if (!n)
		_putchar(rem + '0');
	else
		_putchar(rem + '0');
}
