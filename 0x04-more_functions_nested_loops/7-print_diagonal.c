#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: num of lines
 * Return: diagonal on terminal
 */

void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (l = 0; l < n; l++)
	{
		for (m = 0; m <= l; m++)
		{
			if (l == m)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
