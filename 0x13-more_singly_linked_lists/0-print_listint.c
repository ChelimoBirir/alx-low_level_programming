#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list
 *
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* To keep track of the number of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		count++; /* Increment the count of nodes */
		h = h->next; /* Move to the next node */
	}
	return (count);
}
