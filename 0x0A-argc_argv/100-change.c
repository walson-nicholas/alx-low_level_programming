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
	int x, y = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (x > 0)
	{
		if (x >= 25)
			x -= 25;
		else if (x >= 10)
			x -= 10;
		else if (x >= 5)
			x -= 5;
		else if (x >= 2)
			x -= 2;
		else if (x >= 1)
			x -= 1;
		y += 1;
	}
	printf("%d\n", y);
	return (0);
}
