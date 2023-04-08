/**
 *set_bit - sets bit @index to 1
 *@n: pointer to number
 *@index: index to set bit
 *
 *Return: 1 if pass -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (sizeof(unsigned long int) * 8 > index)
	{
		j = *n >> index | 1;
		j = j << index;
		*n = *n << index;
		*n = *n  >> index;
		*n = *n | j;
		return (1);
	}
	return (-1);
}
