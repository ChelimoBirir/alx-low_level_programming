#include "main.h"
#include <stdio.h>

/*
 * argstonew_str - concatenates stdin arguments
 *
 * Return: pointer to the new_string
 *
 */int _strlen(char *s)
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
 * argstostr - concatenates all the arguments to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointe to new new_string
 */

char *argstostr(int ac, char **av)
{
	int length, i, j, k;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += _new_strlen(av[i]) + 1;
	}

	new_str = malloc(sizeof(char) * length + 1);
	if (new_str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _new_strlen(av[i]); j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
