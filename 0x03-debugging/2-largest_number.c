#include "main.h"

/**
 * largest_number - prints the largest of three numbers
 * @a: input one
 * @b: input two
 * @c: input three
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
