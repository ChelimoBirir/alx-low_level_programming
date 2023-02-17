#include <stdio.h>

/* main - Entry point
 * Return: Always 0(Success)
 */

/* 
 * prints alphabet in lowercase
 */ int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{	
		putchar(letter);
	}
	putchar('\n');
	
	return (0);
}
