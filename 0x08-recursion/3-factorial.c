#include "main.h"

/**
 *int factorial:gives factorial of a given number.
 *n: int
 *return :-1 (error) , 1 (factorial of 0)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n-1));
}
