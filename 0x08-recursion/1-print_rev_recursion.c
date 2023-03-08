#include "main.h"

/*
 * _print_rev_recursion : prints a string in reverse recursively
 *
 * Return: void
 *
 */void _print_rev_recursion(char *s)
{
	int i = _strlen(s);

	if (i == 0)
		return;
	_putchar(s[i]);
	s--;
	_print_rev_recursion(s);
}
