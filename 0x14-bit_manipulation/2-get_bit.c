#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the number to be printed in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
}
