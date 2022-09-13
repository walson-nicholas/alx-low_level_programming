#include "main.h"

/**
 * main - prints a set of characters
 * Return: Always 0 for success
 */
int main(void)
{
	char x[] = "_putchar";
	int i = 0;

	while (x[i] != '\0')
	{
		_putchar(x[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
