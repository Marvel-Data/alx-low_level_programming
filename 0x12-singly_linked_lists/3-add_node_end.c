#include "lists.h"

/**
 * add_node_end - adds a new node to the end
 * @head: first argument
 * @str: data
 *
 * Return: List_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *test;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		test = *head;

		while (test->next != NULL)
			test = test->next;
		test->next = new;
	}

	return (new);
}
#include "lists.h"

/**
 * add_node_end - adds a new node to the endi
 * @head: first argument
 * @str: string
 *
 * Return: List_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *test;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		test = *head;

		while (test->next != NULL)
			test = test->next;
		test->next = new;
	}

	return (new);
}
