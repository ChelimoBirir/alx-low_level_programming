#include "main.h"

/*
 * print_rev: prints a string in reverse
 *
 * Return: void
 *
 */void print_rev(char *s)
{
	int i;

	for (s[i] = '\0'; i > 0; i--)
	{
		_putchar(s[i]);
	}

}
