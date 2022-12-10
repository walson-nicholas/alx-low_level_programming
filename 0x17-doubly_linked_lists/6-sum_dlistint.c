#include "lists.h"

/**
 * sum_dlistint - main
 * @head: var 1
 * Return: ror
 */
int sum_dlistint(dlistint_t *head)
{
	int x;

	x = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			x += head->n;
			head = head->next;
		}
	}

	return (x);
}
