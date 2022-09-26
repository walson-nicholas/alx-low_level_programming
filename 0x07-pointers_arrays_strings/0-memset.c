#include "main.h"

/**
 * _memset - chances set bytes of memery to a new character
 * @s: string to be modified
 * @b: new character to modify a string
 * @n: number of times memory is changed
 * Return: modified string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
