#include <stdio.h>

/*
 * main - multiplies two numbers
 *
 * Return: int
 *
 */int main(int argc, char *argv[])
{

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
