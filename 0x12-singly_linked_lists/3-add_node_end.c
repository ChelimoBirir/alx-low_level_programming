#include "lists.h"

/* stringlength function */

int _stringlength(const char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}


/**
 * add_node_end - adds a node at the end of list_t
 *
 * Return: a list
 *
 */list_t *add_node_end(list_t **head, const char *string)
{
	list_t *new;
	char *content;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (string == NULL)
		return (NULL);

	content = strdup(string);
	if (content == NULL)
	{
		free(new);
		return (NULL);
	}

	new->length = _stringlength(string);
	new->string = content;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
