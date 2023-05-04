#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string representation of the binary number
 *
 * Return: the converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1; /* shift left by 1 bit */
		if (b[i] == '1')
			num += 1; /* add 1 if current bit is 1 */
	}

	return (num);
}
