#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n - number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	int num_bits = sizeof(n) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{

		unsigned long int mask = 1UL << i;

		if (n & mask)
			_putchar('1');

		else
			_putchar('0');
	}
}
