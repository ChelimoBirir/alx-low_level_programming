#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 * prints fibonacci sequence
 *
 */int main(void)
{
	int i;
	int max = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (max / 2); i++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (max % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
