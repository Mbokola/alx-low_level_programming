#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program entry point
 * void: no parameter
 * Return: zero if unsuccesful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int l = n % 10;

	if (n < 0)
		printf("The last digit of %d is %d and is less than 6 and not 0", n, l);
	else if (l == 0)
		printf("The last digit of %d is 0 and is 0", n);
	else if (l < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0", n, l);
	else
		printf("The last digit of %d is %d and is greater than 5", n, l);

	return (0);
}
