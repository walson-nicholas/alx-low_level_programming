#include "main.h"

/**
 * _strdup - allocates memory space and contains copy of string
 * @str: pointer to input string
 * Return: pointer to allocated memory space
 */
char *_strdup(char *str)
{
	char *p;
	char *x;
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *)malloc(i * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (str != NULL)
	{
		while (j <= i)
		{
			p[j] = str[j];
			j++;
		}
	}
	else
	{
		x = "failed to allocate memory\n";
		p = x;
		return (NULL);
	}
	return (p);
}
