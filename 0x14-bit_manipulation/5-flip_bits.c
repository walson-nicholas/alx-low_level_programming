#include "main.h"

/**
 * flip_bits - main
 * @n: var 1
 * @m: var 2
 * Return: val
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}

