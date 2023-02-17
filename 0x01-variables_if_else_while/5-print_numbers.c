#include <stdio.h>

/**
 *main - program entry point
 *void: no arguments
 *Program will print base 10 single digits
 *Return: zero if succesful
 */

int main(void)
{
	/* Declare variable i = 0 */

	int i = 0;

	/* Use for loop to extract digits */

	for (i; i < 10; i++)
		printf("%d\n", i);
	return (0);
}
