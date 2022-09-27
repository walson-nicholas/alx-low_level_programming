#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
	char *s = "Asimiea Walson Nicholas";
	char *f = "Wc";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
