#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: pointer to pointer of the listint_t to be deleted
 * @index:  the index of the node that should be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *A = *head, *C = NULL;

	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(A);
		return (1);
	}
	while (j < index - 1)
	{
		if (!A || !(A->next))
		{
			return (-1);
		}
		A = A->next;
		j++;
	}
	C = A->next;
	A->next = C->next;
	free(C);
	return (1);
}
