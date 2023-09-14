#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 *
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	dlistint_t *temp_node;

	if (head == NULL)
	return (NULL);

	temp_node = head;
	while (temp_node)
	{
	if (index == position)
	return (temp_node);
	position++;
	temp_node = temp_node->next;
	}
	return (NULL);
}
