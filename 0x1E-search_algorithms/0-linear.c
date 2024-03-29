#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, -1 If value is not present
 * in array or if array is NULL
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
