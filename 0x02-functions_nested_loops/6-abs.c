#include "main.h"

/**
 * _abs - return the absolute value to a number
 * @c: input variable
 * Return: 0
 */

int _abs(int c)
{
	if(c <= 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
