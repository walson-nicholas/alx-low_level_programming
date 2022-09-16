#include "main.h"

/**
 * print_diagonal - fun
 * Description: defn
 * @n: num of lines
 */

void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
		_putchar('\n');

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
