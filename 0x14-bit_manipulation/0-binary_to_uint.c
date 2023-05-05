#include "main.h"

/**
 * binary_to_uint - converts a binary number as a string to an unsigned int
 * @b: array of characters
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0,
	lenght = 0, i;

	if (b == NULL)
		return (0);

	lenght = strlen(b);
	for (i = 0; i < lenght; i++)
	{
		if (b[i] == '0')
			converted = converted << 1;
		else if (b[i] == '1')
			converted = (converted << 1) | 1;
		else
			return (0);
	}

	return (converted);

}
