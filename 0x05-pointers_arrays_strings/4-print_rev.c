#include "main.h"

/*
 * print_rev: prints a string in reverse
 *
 * Return: void
 *
 */void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int j;

	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
