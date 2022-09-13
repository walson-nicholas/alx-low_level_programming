#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c - input
 * Return: if 1 if success, 0 if failure
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
