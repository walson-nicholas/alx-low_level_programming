#include "main.h"

/**
 * _strpbrk - first occurence of a character in a substring
 * @s: input string to be scanned
 * @accept: substring
 * Return: pointer to the byte in s matching any byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
