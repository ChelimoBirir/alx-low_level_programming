#include "main.h"

/**
 * binary_to_uint - converts a binary resultber to an unsigned integer
 *
 * @b - pointer to the binary resultber
 *
 * Return - result(unisgned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, mult = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++);

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * mult;
		mult *= 2;
	}

	return (result);
}
