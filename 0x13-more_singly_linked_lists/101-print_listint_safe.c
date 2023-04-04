#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a safe version of listint_t
 *
 * Return: int
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		num_nodes++;

		if (head <= head->next)
		{
			printf("Error: infinite loop detected\n");
			exit(98);
		}

		head = head->next;
	}

	return (num_nodes);
}
