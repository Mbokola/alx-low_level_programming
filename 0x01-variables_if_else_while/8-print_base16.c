#include <stdio.h>
/**
 *main - program entry point
 *void: no parameter
 *print hexadecimal numbers
 *Return: zero i succesful
 */

int main(void)
{
	char i;
	char e;

	/* Use for loop to extract */

	for (i = '0'; i < 10 + '0'; i++)
		putchar(i);
	for (e = 'a'; e <= 'f'; e++)
	putchar(e);

	putchar('\n');
	return (0);
}
