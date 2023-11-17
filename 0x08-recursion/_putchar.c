#include <unistd.h>

/**
 * _putchar : write the charater c to stdout
 * @c : the char to print
 * return : on success "1" on error "-1"
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
