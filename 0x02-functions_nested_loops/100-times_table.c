#include "main.h"

/**
 * print_times_table - times table
 * @n: input
 * Return: 0
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				z = x * y;
				_putchar(44);
				_putchar(32);
				if (z <= 9)
				{
					_putchar(32);
					_putchar((z / 10) + 48);
					_putchar((z % 10) + 48);
				}
				else
				{
					_putchar(((z / 100) % 10) + 48);
					_putchar(((z / 10) % 10) + 48);
					_putchar((z % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
