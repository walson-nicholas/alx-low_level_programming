#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
	char *s = "Nicholas";
	char *f;

	f = _strchr(s, 'l');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
