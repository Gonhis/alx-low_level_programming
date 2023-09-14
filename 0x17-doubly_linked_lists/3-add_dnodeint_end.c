#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: double pointer of head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new_h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_h = *head;
	if (new_h != NULL)
	{
		while (new_h->next != NULL)
			new_h = new_h->next;
		new_h->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = new_h;
	return (new_node);
}
