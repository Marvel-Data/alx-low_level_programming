#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *test;

	while (head)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;

		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			test = *head;
			while (test->next)
				test = test->next;
			test->next = new;
			return (new);
		}
	}
	return (NULL);
}
