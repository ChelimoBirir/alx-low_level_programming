#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 * prints natural numbers below 1024, that are multiples of 3 and 5
 *
 */int main(void)
{
	int sum, i;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d", sum);

	return (0);
}
