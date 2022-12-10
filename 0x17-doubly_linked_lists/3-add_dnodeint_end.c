#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *x;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = x;
	}
	else
	{
		*head = x;
	}

	x->prev = h;

	return (x);
}
