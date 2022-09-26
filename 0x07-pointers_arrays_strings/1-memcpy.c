#include "main.h"

/**
 * _memcpy - copies memory from one string to another
 * @dest: destination
 * @src: source
 * @n: number of characters or memory space to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *dest2 = (char *)dest;
	char *src2 = (char *)src;

	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
