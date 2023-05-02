#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 *
 * @head: pointer to listint_t
 * @index: index of the node
 *
 * Return: NULL or  nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	listint_t *A = head;

	while (A && j < index)
	{
		A = A->next;
		j++;
	}
	return (A ? A : NULL);
}

