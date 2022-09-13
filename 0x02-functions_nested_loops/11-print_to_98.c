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
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	else if (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar(98);
}
