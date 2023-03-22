#include "main.h"
#include <ctype.h>

/**
 * _islower - function to check for lowercase character
 * @c: it's the int that check if the condition is met
 * Return: 1 (success, condition met) 0 (False, condition not met)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

	return (0);
}
