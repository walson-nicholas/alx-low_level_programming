#include "main.h"

/**
 * swap_int - main function
 * @a: var 1
 * @b: var 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
