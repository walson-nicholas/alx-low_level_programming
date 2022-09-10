#include <stdio.h>

/**
 * main - print out alphabets in reverse
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0x30; i <= 0x39; ++i)
	{
		putchar(i);
	}
	for (i = 0x61; i <= 0x66; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
