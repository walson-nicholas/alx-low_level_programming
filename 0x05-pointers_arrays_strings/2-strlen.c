#include "main.h"
#include <string.h>

/**
 * _strlen - main function
 * @s: var 1
 * Return: 0
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++ != '\0')
	{
		y++;
	}
	return (y);
}
