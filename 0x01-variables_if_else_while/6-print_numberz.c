#include <stdio.h>
/**
 *main - program entry point
 *void: no parameter
 *print single digits using putchar
 *Return: zero i succesful
 */

int main(void)
{
	/* Declare variable i */

	int i;

	/* Use for loop to extract digits and convert to char */

	for (i = 0 + '0'; i < 10 + '0'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
