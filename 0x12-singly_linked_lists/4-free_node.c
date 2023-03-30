#include "lists.h"

/**
 * free_list - frees the list list_t
 *
 * Return: void
 *
 */void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->string);
		free(head);
		head = temp;
	}
}
