#include "main.h"

/**
 *flip_bits - checks number of bits that need flipping
 *@n: number to check
 *@m: number to flipped to
 *
 *Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			counter++;

		n = n >> 1;
		m = m >> 1;
	}
	return (counter);
}
