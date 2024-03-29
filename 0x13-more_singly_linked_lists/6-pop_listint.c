#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: The integer value stored in the head node.
 *         If the list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	value = temp->n;
	free(temp);

	return (value);
}
