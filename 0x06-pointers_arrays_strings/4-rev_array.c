#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s;
	int i;

	for (i = 0; i <= n/2; i++)
	{
		s = a[i];
		a[i] = a[--n];
		a[n] = s;
	}
}
