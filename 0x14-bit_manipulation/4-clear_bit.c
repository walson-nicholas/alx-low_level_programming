#include "main.h"

/**
 * clear_bit - main
 * @n: var 1
 * @index: var 2
 *
 * Return: val
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
