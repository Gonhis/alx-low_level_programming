#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: double pointer of head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new_h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_h = *head;

	if (new_h != NULL)
	{
		while (new_h->prev != NULL)
			new_h = new_h->prev;
	}

	new_node->next = new_h;
	if (new_h != NULL)
		new_h->prev = new_node;
	*head = new_node;
	return (new_node);
}
