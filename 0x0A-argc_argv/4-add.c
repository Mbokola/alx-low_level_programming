#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 2; i <= argc; i++)
	{
		if ((atoi(argv[i - 1]) && atoi(argv[i - 1]) > 0) || (*argv[i - 1] == '0'))
			sum += atoi(argv[i - 1]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (sum)
		printf("%d\n", sum);
	else
		printf("%d\n", sum);
	return (0);
}
