#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * str_concat - concatenates two strings
 *
 * Return: pointer to new string
 *
 */char *str_concat(char *s1, char *s2)
{
	char *new_str;

	int i = 0, len = 0, j = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		len++;
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}
	len2++;

	new_str = malloc(sizeof(char) * (len + len2));

	while (i < len)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	return (new_str);
}
