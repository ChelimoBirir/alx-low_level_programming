#include "main.h"

/*
 * _strlen: returns the lenghth of a string
 *
 * Return: int
 *
 */int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}

/*
 * *_strcat - concatenates two strings
 *
 * Return: a pointer to the resulting string
 *
 */char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j;

	for (j = 0; j < i && src([j] != '\0'; j++)

		dest[j + i] = src[j];

	dest[j + i] = '\0';

	return (dest);
}
