#include "main.h"

/*
 * _strncat - concatenates two strings
 *
 * Return: destination string
 *
 */char *_strncat(char *dest, char *c, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
