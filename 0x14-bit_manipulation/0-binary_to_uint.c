#include "main.h"

/**
 * binary_to_uint - main
 * @b: var 1
 * Return: val
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int length, base2;

	if (!b)
		return (0);

	ui = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			ui += base2;
		}
	}

	return (ui);
}
