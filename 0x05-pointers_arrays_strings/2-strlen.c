#include "main.h"
#include <stdio.h>

/**
 * _strlen : retuns the lenght of a string
 *
 * s is a sring parameter input
 *
 * return the lenght of a string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
