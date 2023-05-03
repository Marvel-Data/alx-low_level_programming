#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints the number of parameters
  * @h: the pointer to a list
  * Return: Integer.
  **/

size_t print_listint(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
