/**
 *set_bit - sets bit @index to 1
 *@n: pointer to number
 *@index: index to set bit
 *
 *Return: 1 if pass -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (sizeof(unsigned long int) * 8 > index)
	{
		j = 1 << index;
		if (*n)
			*n ^= j;
		else
			*n &= j;
		return (1);
	}
	return (-1);
}
