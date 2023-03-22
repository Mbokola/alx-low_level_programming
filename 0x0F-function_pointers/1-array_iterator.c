#include "function_pointers.h"
/**
 *array_iterator - iterates through array and excecutes a function
 *@array: pointer to array for iterate
 *@size: size of array
 *@action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action) /* checks for null value */
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
