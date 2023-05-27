#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: first argument
 *
 * Return: List_t
 */
void free_listint(listint_t *head)
{
	listint_t *test;

	while (head != NULL)
	{
		test = head;
		head = head->next;
		free(test);
	}
}
