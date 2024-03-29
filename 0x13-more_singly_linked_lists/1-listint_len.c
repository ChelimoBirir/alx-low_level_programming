#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 *
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 *
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
