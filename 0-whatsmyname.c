#include <stdio.h>

/*
 * main - prints the program's name
 *
 * Return: pointer to argc
 *
 */int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
