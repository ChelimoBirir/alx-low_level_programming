#include "main.h"

/*
 * print_last_digit - Entry point
 *
 * Return: value of last digit
 *
 */ int print_last_digit(int)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + (n % 10));

	return (n % 10);
}

