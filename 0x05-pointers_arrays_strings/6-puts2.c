#include "main.h"

/*
 * puts2: prints every other character of a string
 *
 * return: void
 *
 */void puts2(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 2;
	}
}
