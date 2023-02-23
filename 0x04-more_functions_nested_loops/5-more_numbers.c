#include "main.h"

/*
 * more_numbers: prints 0 - 14 ten times
 *
 * Return: void
 *
 */void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j < 14)
		{
			_putchar(j);
			j++;
		}
	}

}
