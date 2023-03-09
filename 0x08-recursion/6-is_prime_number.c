/**
 *checker - function to check for prime number
 *@i: number for check
 *@j; decrement
 *Return: 1 if prime 0 if not
 */
int checker(int i, int j)
{
	if ((i <= 1) || (i % j == 0 && j != 1 && i != j))
		return (0);
	if (j == 1)
		return (1);
	return (checker(i, j - 1));
}
/**
 *is_prime_nember - function to check for prime number
 *@n: number for check
 *Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	return (checker(n,9));
}
