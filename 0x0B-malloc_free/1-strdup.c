#include "main.h"
#include <stdio.h>

/*
 * _strdup - allocates memory for a string
 * *str - the string
 *
 * Return: a pointer
 *
 */char *_strdup(char *str)
{
	char *new_str;

	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
		len++;
	}
	len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	i = 0;

	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
