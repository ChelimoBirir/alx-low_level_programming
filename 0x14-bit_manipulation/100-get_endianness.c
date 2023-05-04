#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	/* if the first byte (the least significant byte) of x is 0x10, the system is little endian */
	if (*c == 0x10)
		return 1;
	/* otherwise, the system is big endian */
	else
		return 0;
}
