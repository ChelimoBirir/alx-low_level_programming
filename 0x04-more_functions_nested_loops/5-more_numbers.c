#include "main.h"

/*
 * more_numbers: prints 0 - 14 ten times
 *
 * Return: void
 *
 */void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;

		while (j < 14)
		{
			if (j / 10 > 0)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
	}

}
