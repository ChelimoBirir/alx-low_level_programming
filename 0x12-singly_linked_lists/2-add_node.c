#include "lists.h"

/**
 *  stringlength function
 *
*/int _stringlength(const char *s)
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
 * add_node: adds a node at the start of list_t
 *
 * Return: a list
 *
 */list_t *add_node(list_t **head, const char *string)
{
	list_t *new;
	char *content;
	int list_length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (string == NULL)
	{
		content = NULL;
		list_length = 0;
	}
	else
	{
		content = stringdup(string);
		list_length = _stringlength(string);
	}
	new->length = list_length;
	new->string = content;
	new->next = *head;
	*head = new;

	return (*head);
}
