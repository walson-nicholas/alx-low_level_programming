#include "main.h"

/**
 * create_array - create and initialize an array of characters
 * @size: lenght of the array
 * @c: the character used to initialize the array
 * Return: pointer to to the creater array
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = (char *)malloc(size * sizeof(char));
	if (x == NULL)
	{
		printf("ERROR");
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
