#include "main.h"

/*
 * puts_half: prints half of a string to stdout
 *
 * Return: void
 *
 */void puts_half(char *str)
{
	int i = _strlen(*str);

	int i = i / 2;

	int j;

	for (j = 0; j <= i; j++)
	{
		_putchar(str[i]);
	}

}
