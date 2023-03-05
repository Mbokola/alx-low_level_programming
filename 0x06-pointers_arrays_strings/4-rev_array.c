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
	int c = 0;

	for (i = n - 1; i > c; i--)
	{
		s = a[c];
		a[c++] = a[i];
		a[i] = s;
	}
}
