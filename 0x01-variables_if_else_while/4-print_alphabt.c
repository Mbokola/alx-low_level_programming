#include <stdio.h>
/**
 *main - Program entry point
 *void - type void
 *Return: zero if succesful
 */
int main(void)
{
	char c = 'a';

	do {
		if (c == 'q' || c == 'e')
			putchar(++c);
		else
			putchar(c);
		c++;
	} while (c <= 'z');
	putchar('\n');
	return (0);
}
