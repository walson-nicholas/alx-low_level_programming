#include "main.h"

/**
 * main -  returns other functions
 * Return: always 0
 */

int main(void)
{
	char name[8] = "Nicholas";

	_memset(name, 'w', 5);
	printf("%s\n", name);
	return (0);
}
