#include "main.h"

/**
 * main - returns other functions
 * Return: always 0
 */
int main(void)
{
	char firstName[9] = "Nicholas";
	char lastName[8] = "Asimiea";

	_memcpy(firstName + 1, lastName, 3);
	printf("%s\n", firstName);
	return (0);
}
