#include "lists.h"

/**
 * print_list - prints the elements in a list list_t
 *
 * Return: int(number of elements)
 *
 */size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		if (h->string == NULL)
			printf("[%d](nil)\n", 0);
		else
			printf("[%d] %s\n)", h->length, h->string);
		h = h->next;
	}
	return (count);
}