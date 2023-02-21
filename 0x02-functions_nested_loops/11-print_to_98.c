#include "main.h"

/*
 * print_to_98 - Entry point
 *
 * Return: void
 *
 * prints numbers from n to 98
 *
 */ void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
