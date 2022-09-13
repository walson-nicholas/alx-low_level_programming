#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98 either forward or backward
 * @n: input integer
 * Return: print out of number to 98
 */

void print_to_98(int n)
{
	if (x > 98)
	{
		for (; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	else if (x < 98)
	{
		for (; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	printf("%d\n", x);
}
