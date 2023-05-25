#include "lists.h"

/**
 * add_node - adds a new node
 * @head: first argument
 * @str: data
 *
 * Return: List_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neu;

	if (str == NULL)
		return (NULL);

	neu = malloc(sizeof(list_t));

	if (neu == NULL)
		return (NULL);

	neu->str = strdup(str);
	if (neu->str == NULL)
	{
		free(neu);
		return (NULL);
	}

	neu->len = strlen(str);
	neu->next = *head;
	*head = neu;

	return (neu);
}
