#include "main.h"

/**
 *_strlen_recursion : returns the length of a string
 * * : pointer
 * return : int
 */

int _strlen_recursion(char *s)
{
	intntr = 0;
	if (*s > '\0')
	{
	ntr += int _strlen_recursion(s + 1) + 1;
	}
	return (ntr);
}

