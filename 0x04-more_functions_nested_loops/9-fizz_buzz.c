#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * return: always 0(success)
 *
 * prints numbers 1 - 100
 * if number is divisible by 3, prints Fizz
 * if number is divisible by 5, prints Buzz
 * if number is divisible by both, prints FizzBuzz
 *
 */int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz ");

		else if (i % 5 == 0)

			printf("Buzz ");

		else if (i % 3 == 0)

			printf("Fizz ");

		else
			printf("%d ", i);

		i++;


	}
}