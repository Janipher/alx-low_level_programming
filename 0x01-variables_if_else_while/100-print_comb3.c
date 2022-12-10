#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints ten digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*pirints ones digits*/
		{
		if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
		{
			putchar(tens);
			putchar(ones);
			if (!(ones == '9' && tens == '8'))/*adds comma and space*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');

	return (0);
}
