#include "main.h"
#include <stdlib.h>
/**
 * _realloc - main
 * @ptr: var 1
 * @old_size: var 2
 * @new_size: var 3
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
