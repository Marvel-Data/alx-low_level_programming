#include "main.h"

/**
  * _pow_recursion - computes power of a number
  * @x: the value to multiply
  * @y: the times to multiply the value
  *
  * Return: the value multiplied y times
  */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
