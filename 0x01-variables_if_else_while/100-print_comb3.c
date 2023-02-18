#include <stdio.h>

/**
 * main - program entry
 * void: no parameters
 * Program to print digit pair combo
 * Return: zero if succesful
 */

int main(void)
{
	int a = 0 + '0';

	while (a <= '9')
	{
		int b = 1 + '0';

		while ( b <= '9')
		{
			putchar(a);
			putchar(b);
			b++;
			if (b != 10 + '0')
			{
				putchar(',');
				putchar(' ');
			}
			
		}
		a++;
	}

	putchar('\n');
	return (0);
}
