#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: zero if succesful
 */

int main(void)
{
	int c = 50;
	int b = 49;
	int a = 48;

	while (a != b && a < b && b <= 58)
	{
		if (b > 57)
			b = a + 1;
		while (a != b && b < c && b <= 57)
		{
			if (c > 57)
				c = b + 1;
			while (b != c && b < c && c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a + b + c != 168)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}

	return (0);
}
