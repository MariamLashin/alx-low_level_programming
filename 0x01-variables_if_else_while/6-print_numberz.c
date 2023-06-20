#include <stdio.h>

/**
 * main - Enty point
 *
 * Description: prints all single digit numbers of base 10
 *		starting from 0 using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	/*convert digits to ASCII*/
	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
