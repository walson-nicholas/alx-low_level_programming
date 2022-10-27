#include "main.h"

/**
 * get_endianness - main
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i;
	char *s;

	i = 1;
	s = (char *) &i;

	return ((int)*s);
}
