#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first argument
 * @m: second argument
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned long int i;

	temp = n ^ m;
	i = 0;

	while (temp)
	{
		i++;
		temp &= (temp - 1);
	}

	return (i);
}
