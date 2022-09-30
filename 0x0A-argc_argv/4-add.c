#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: var 1
 * @argv: var 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			x += atoi(argv[i]);
		}
	}
	printf("%d\n", x);
	return (1);
}
