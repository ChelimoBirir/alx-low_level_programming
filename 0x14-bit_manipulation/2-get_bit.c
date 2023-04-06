#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @index - the index
 *
 * Return : int(value of bit)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	if (n & mask)
		return (1);

	else
		return (0);
}
