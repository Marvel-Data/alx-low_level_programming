#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: a seperator
 * @n: count
 *
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *temp;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			temp = va_arg(args, char*);
			if (temp == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", temp);
			}

			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
