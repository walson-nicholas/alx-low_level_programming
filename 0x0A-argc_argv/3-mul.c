#include <stdio.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: var 1
 * @argv: var 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
