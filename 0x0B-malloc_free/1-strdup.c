#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - main
 * Return: 0
 * @str: var 1
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;
	int count;

	count = 0;
	j = 0;
	while (str[j] != '\0')
	{
		count++;
		j++;
	}

	p = malloc(count * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (str != NULL)
	{
		i = 0;
		while (i <= count)
		{
			p[i] = str[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}

