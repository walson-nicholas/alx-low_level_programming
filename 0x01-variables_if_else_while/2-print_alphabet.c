#include <stdio.h>

/**
 *
 * main - prints out the alphabet
 * Return:Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
