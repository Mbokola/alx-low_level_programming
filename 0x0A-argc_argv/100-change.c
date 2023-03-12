#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int a, b, i, c = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("%d\n", c);
		if (atoi(argv[1]))
		{
			a = atoi(argv[1]);
			for (i = 0; i < 5; i++)
			{
				if (a >= change[i])
				{
					b = a / change[i];
					a %= change[i];
					c += b;
				}
			}
		}
	}
	if (argc < 2)
		printf("Error\n");
	if (c)
		printf("%d\n", c);
	return (0);
}
