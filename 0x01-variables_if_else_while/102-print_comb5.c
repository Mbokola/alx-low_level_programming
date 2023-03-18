#include <stdio.h>
/**
 *main - program entry point
 *@void: no parameter
 *Return: 0 if succesful
 */
int main(void)
{
	int i, j, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (a = i; a <= 9; a++)
			{
				for (b = 1; b <= 9; b++)
				{
					if (j == b)
						b += 1;
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(a + '0');
					putchar(b + '0');
					if (!(i - j == 1) || (a - b))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
