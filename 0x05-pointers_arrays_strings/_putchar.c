#include<unistd.h>

/**
 * _putchar : writes the character c to stdout
 * return on success 1
 * return on error is -1 and the error is set appropriately
 */



int _putchar(char c)
{
	return (write(1, &c, 1));
}
