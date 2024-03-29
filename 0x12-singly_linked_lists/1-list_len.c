#include "lists.h"

/**
 * list_len: finds the lenght of a list list_t
 *
 * Return: int(number of elements)
 *
 */size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
