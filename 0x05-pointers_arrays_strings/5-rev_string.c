#include "main.h"

/*
 * _strlen - finds length of s
 *
 * returns: lenght (i)
 *
 */int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
}

/*
 * rev_string - reverses a string
 *
 * Return: void
 *
 */void rev_string(char *s)
{

	int j = 0;
	int i = (_strlen(s) - 1);
	char tmp;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++, i--;
	}
}
