#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
