#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}


	test_(n);
}


/**
 * test_ - division for binary
 * @n:first argument
 *
 * Return: void
 */
void test_(unsigned long int n)
{
	if (n < 1)
		return;

	test_(n >> 1);

	if (n & 1)
		printf("1");
	else
		printf("0");
}
