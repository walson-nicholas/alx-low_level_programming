#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - main function
 * @s: var 1
 * @y: var 2
 * Return: 0
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++ != '\0')
		y++;
	return (y);
}
