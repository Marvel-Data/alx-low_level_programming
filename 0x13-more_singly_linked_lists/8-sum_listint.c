#include "lists.h"

/**
 * sum_listint - prints the sum of a linked list
 * @head: first argument
 *
 * Return: List_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
