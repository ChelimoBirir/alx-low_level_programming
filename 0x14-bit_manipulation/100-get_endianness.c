#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	/* If the first byte of the int is 1, the machine is little endian */
	if (*endian == 1)
		return (1);
	else
		return (0);

}
