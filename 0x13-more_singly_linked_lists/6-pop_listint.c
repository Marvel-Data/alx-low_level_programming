#include "lists.h"

/**
 * pop_listint - frees list_t
 * @head: first argument
 *
 * Return: List_t
 */
int pop_listint(listint_t **head)
{
	listint_t *test;
	int i = 0;

	if (*head != NULL)
	{
		test = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = test;
	}
	return (i);
}
