#include "main.h"

/**
  * _puts_recursion - Prints out each character in the string
  * @s: The reversed string
  *
  * Returns: Always 0.
  */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
