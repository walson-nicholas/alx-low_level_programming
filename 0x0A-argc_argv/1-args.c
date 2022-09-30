#include <stdio.h>

/**
 * main - main function
 * @argc: var 1
 * @argv: var 2
 * Return: 0;
 */
int main(int argc, char **argv)
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
