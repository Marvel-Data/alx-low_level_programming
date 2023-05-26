#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *p = (unsigned char *)&x;

	return ((int)*p);
}
