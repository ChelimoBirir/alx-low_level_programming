#include "main.h"

/*
 * leet - encodes a string into 1337.
 *
 * @str: string to be encoded
 *
 * Return: a pointer to the encoded string
 */char *leet(char *str)
{
	int i = 0, i;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (i = 0; i <= 7; i++)
		{
			if (str[i] == leet[i] ||
				str[i] - 32 == leet[i])
				str[i] = i + '0';
		}

		i++;
	}

	return (str);
}
