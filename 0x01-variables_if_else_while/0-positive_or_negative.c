#include <stdio.h>
/**
 *main - Program entry point
 *void: void type
 *
 *Return: zero if succesful
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n". n);
	return (0);
}