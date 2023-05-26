#include "lists.h"

/**
 * free_list - frees list in the file
 * @head: first argument
 *
 * Return: List_t
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
