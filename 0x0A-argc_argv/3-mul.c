#include <stdio.h>

/*
 * main - multiplies two numbers
 *
 * Return: int
 *
 */int main(int argc, char *arg[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
