#include <stdio.h>

/**
 * main - Entry point
 * Description : print single-digit numbers separated by , .
 * return : 0 (success)
 */

int main(void)
{
	int num = 0;
	while (num <= 9)
	{
		putchar (num + 48);
		if (num != 9)
		{
			putchar (',');
			putchar (' ');
		}
		num++;
	}
	putchar ('\n');
	return (0);
}
