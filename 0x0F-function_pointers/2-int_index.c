#include "function_pointers.h"
/**
 *int_index - checks index of first value @cmp does not return 0
 *@array: array values to be checked
 *@size: size of array
 *@cmp: function pointer
 *
 *Return: index if true, -1 if no match or size <= 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i; /* iteration variable */

	if (size <= 0)
		return (-1);
	if (array && cmp) /* check for null input */
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
