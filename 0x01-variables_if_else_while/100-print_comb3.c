#include <stdio.h>
/**
 * main - Program entry point
 * void: no parameter
 * Return: zero if unsuccesful
 */
int main(void)
{
	int a = 0;
	int c;
	int b;

	while (a <= 8)
	{
		b = (a + 1) + '0';
		c = a + '0';
		a++;
		while (b <= '9')
		{
			putchar(c);
			putchar(b);
			b++;
			if (a != 9 || b == '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
