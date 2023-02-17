#include <stdio.h>

/*
 * main - Entry point
 * Return: ALways 0(Success)
 *
 *
 * prints all possible combinations of two two-digit numbers
 */ int main(void)
{

	int tens;
	int ones;
	int tens1;
	int ones1;

	for (tens = '0'; tens <= '9'; tens++) /* prints first two digit combo */
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (tens1 = tens; tens1 <= '9'; tens1++) /* print second pair */
			{
				for (ones1 = ones + 1; ones1 <= '9'; ones1++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tens1);
					putchar(ones1);

					if (!((tens == '9' && ones == '8') &&
					      (tens1 == '9' && ones1 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				ones1 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
