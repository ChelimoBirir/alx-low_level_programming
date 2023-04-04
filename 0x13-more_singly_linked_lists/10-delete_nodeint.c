#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in listint_t
 * at a certain index
 *
 * Return: int(1 if success, -1 otherwise)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	previous_node = current_node;
	current_node = current_node->next;

	for (i = 1; i < index && current_node != NULL; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
