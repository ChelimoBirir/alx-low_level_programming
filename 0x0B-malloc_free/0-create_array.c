#include "main.h"
#include <stdlib.h>

/*
 * create_array - does just that
 *
 * Return: pointer to the array
 *
 */char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);


	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
