#include "lists.h"

void test(void) __attribute__((constructor));

/**
 * test - runs before the main function
 *
 * Return: void
 */

void test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}