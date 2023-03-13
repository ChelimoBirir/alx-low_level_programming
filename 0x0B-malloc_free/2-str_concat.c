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
	int len1, len2, len3, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	len3 = len1 + len2;

	new_str = (char *) malloc(len3 * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < len2; i++)
		new_str[i + len1] = s2[i];

	return (new_str);
}
