#include "main.h"

/*
 * _strlen - finds length of s
 *
 * returns: lenght (i)
 *
 */int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
 * puts_half: prints half of a string to stdout
 *
 * Return: void
 *
 */void puts_half(char *str)
{
	int i = _strlen(str);
	int j;

	i = i / 2;

	for (j = i; str[j] != '\0'; j++)
	{
		if (i % 2 == 0)
			_putchar(str[j]);

		else
			_putchar(str[j + 1]);

	}
	_putchar('\n');

}
