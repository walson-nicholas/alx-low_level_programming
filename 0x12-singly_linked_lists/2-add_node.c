#include "lists.h"
/**
 * add_node - main
 * @head: var 1
 * @str: var 2
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	size_t count;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	x->len = count;
	x->next = *head;
	*head = x;

	return (*head);
}
