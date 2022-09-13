#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: input number
 * Return: 0
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		c = -c;
	}

	last = c % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar(last + '0');
	return (last);
}
