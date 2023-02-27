#include "main.h"

/*
 * rev_string - reverses a string
 *
 * Return: void
 *
 */void rev_string(char *s)
{
	int i = _strlen(s);
	int j = 0;
	char tmp;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++, i--;
	}
}
