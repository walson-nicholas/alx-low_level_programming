#include "lists.h"

/**
 * add_node_end - main
 * @head: var 1
 * @str: var 2
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;
	size_t count;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	x->len = count;
	x->next = NULL;
	y = *head;

	if (y == NULL)
	{
		*head = x;
	}
	else
	{
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}

	return (*head);
}
