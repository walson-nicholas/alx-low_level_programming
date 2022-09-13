#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long int i;
	long int n = 98;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
