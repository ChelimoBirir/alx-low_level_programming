#include "main.h"

/*
 * _strcpy - copies a string
 *
 * Return: destination string
 *
 */char _strcpy(char *dest, char *src, int n)
{
	int i = _strlen(src);
	int j;


	for (j = 0; j < i; j++)
	{
		dest[j] = s[j];
	}
	s[j] = '\0';
}
