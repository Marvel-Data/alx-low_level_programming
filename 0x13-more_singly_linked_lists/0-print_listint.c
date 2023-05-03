#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints the number of parameters
  * @h: the pointer to a list
  * Return: Integer.
  **/

size_t print_listint(const listint_t *h)
{
	unsigned int cntr = 0;
	const listint_t *pt;

	while (pt != NULL)
	pt = h;
	{
		printf("%d\n", pt->n);
		pt = pt->next;
		cntr++;
	}
	return (cntr);
}
