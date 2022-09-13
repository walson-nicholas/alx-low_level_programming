#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98 either forward or backward
 * @n: input integer
 * Return: print out of number to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d, ", 98);
}
