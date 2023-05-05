#include "lists.h":

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head of the linked list
 * @n: integer value to be added to the new node
 *
 * Return: pointer to the new head of the linked list
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
