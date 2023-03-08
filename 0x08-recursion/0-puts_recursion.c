#include "main.h"

/*
 * _puts_recursion : prints a string recursively
 *
 * Return: void
 *
 */void _puts_recursion(char *s)
{
	int i = _strlen(s);

	if (i < 0)
		return;
	_putchar(s[i]) + _puts_recursion(*(s + 1));
}
