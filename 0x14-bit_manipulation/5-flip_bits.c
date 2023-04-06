#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 *
 * return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m; /* XOR the two numbers */
	unsigned int count = 0; /* initialize the count to 0 */

	/* loop through the differences and count the number of 1 bits */
	while (diff > 0)
	{
		count += diff & 1; /* add 1 to the count if the least significant bit is 1 */
		diff >>= 1; /* shift the differences to the right by 1 bit */
	}

	return (count); /* return the count of differences */
}
