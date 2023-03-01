#include "main.h"

/*
 * array_length - finds number of members in an array
 *
 * Return: void
 *
 */int array_length(int *a)
{
	int s = *(&a + 1) - a;

	return (s);
}

/*
 * reverses_array - reverses the members of an array
 *
 * Return: void
 *
 */void reverse_array(int *a, int n)
{
	int i = array_length(a);

	int j;

	for (j = 0; j < i; j++)
	{
		array[i] = array[j]
		i--;
	}

}
