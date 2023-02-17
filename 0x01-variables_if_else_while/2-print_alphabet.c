#include <stdio.h>
/**
 *main - Program entry point
 *void - type void
 *Return: zero if succesful
 */
int main(void)
{
	char c = 'a';
	char e = 'A';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	do {
		putchar(e);
		e++;
	} while (e <= 'Z');
	return (0);
}
