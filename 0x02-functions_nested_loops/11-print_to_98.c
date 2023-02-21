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
	int number = n;

	if (number < 98)
	{
		while (number < 98)
		{
			_putchar(number);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (number > 98)
	{
		while (number > 98)
		{
			_putchar(number);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
