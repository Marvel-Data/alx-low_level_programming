#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal
 * @index: index position
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	for (tmp = 1; index > 0; index--, tmp *= 2)
		;
	*n += tmp;

	return (1);
}
