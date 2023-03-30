#include "lists.h"

/**
 * print_list - prints the elements in a list list_t
 *
 * Return: int(number of elements)
 *
 */size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		
		if (h->str == NULL)
			printf("[%d](nil)\n", 0);
		else
			printf("[%d] %s\n)", h->len, h->str);
		
		count++;
		h = h->next;
	}
	return (count);
}
