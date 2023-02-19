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

	int lstdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lstdig = n % 10;

	if (n < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0 ", n, lstdig);
	else if (lstdig == 0)
		printf("Last digit of %d is 0 and is 0 ", n);
	else if (lstdig < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0 ", n, lstdig);
	else
		printf("Last digit of %d is %d and is greater than 5 ", n, lstdig);

	return (0);
}
