#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;  /* Variable to keep track of the number of nodes freed */
	listint_t *current, *next;  /* Pointers to the current and next nodes */

	/* Check if the head pointer is NULL */
	if (h == NULL)
		exit(98);

	/* Loop through the list, freeing each node */
	current = *h;  /* Start at the head of the list */

	while (current != NULL)
	{
		count++;  /* Increment the node count */
		next = current->next;  /* Store a pointer to the next node */
		free(current);  /* Free the current node */
		current = next;  /* Move to the next node */

		if (current == *h)  /* Check if we have looped back to the head */
		{
			*h = NULL;  /* Set the head pointer to NULL */
			return (count);  /* Return the number of nodes freed */
		}
	}

	/* Set the head pointer to NULL and return the node count */
	*h = NULL;
	return (count);
}
