#include "main.h"


/**
 * main - check the code
 * Description : function swaps the values of two integers a,b
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
