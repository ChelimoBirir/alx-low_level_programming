#include "lists.h"
#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to return (starting at 0).
 *
 * Return: If the node exists, returns a pointer to it.
 *         Otherwise, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	for (i = 0, current = head; current != NULL && i < index; i++)
		current = current->next;

	return ((i == index && current != NULL) ? current : NULL);
}
