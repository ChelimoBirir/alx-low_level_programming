#include "main.h"

/*
 * string_toupper - cnahges lowercase letters in a string to uppercase
 *
 * Return: string pointer
 *
 */char *string_toupper(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++
	}
	return (str);
}
