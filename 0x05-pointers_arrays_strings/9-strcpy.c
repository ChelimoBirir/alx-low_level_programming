#include "main.h"

/*
 * *_strcpy: copies a string into another
 *
 * return: address pointer
 *
 */char *_strcpy(char *dest, char *src)
{
	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
