#include "lists.h"

/**
 * free_list - main
 * @head: var
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *x;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x->str);
		free(x);
	}
}
