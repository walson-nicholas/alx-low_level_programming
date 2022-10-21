#include "lists.h"
/**
 * list_len - main
 * @h: var 1
 * Return: result
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
