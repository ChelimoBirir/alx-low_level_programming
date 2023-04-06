#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to the unsigned long int that contains the bit to be cleared
 * @index: index of the bit to be cleared, starting from 0
 *
 * @return 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if the index is valid */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* return -1 if the index is out of range */

	/* clear the bit to 0 */
	*n &= ~(1 << index);

	return (1);
}
