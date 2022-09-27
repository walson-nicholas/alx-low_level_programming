#include "main.h"

/**
 * _strchr - searches for the first occurance of a char in a string
 * @s: input string
 * @c: character to search for in string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c)
	{
		i++;
	}
	return (s + i);
}
