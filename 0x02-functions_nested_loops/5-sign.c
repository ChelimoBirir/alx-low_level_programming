#include "main.h"

/*
 * print_sign - Entry point
 *
 * Return 1, 0 or -1
 *
 * checks for sign of a number
 *
 */ int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
