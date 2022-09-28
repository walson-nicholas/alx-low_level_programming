#include "main.h"

/**
 * _pow_recursion - determines x to the power y
 * @x: number to be raised to exponent
 * @y: exponent
 * Return: exponent value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
