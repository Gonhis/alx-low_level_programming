#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts a new node at
 * a given position
 *
 * @head: pointer to pointer of listint_t to be insert
 * @idx:  index of the list where the new node should be added
 * @n: value of data
 *
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NN, *A = *head;

	unsigned int j;

	NN = malloc(sizeof(listint_t));
	if (!NN || !head)
	{
		return (NULL);
	}
	NN->n = n;
	NN->next = NULL;
	if (idx == 0)
	{
		NN->next = *head;
		*head = NN;
		return (NN);
	}
	for (j = 0; A && j < idx; j++)
	{
		if (j == idx - 1)
		{
			NN->next = A->next;
			A->next = NN;
			return (NN);
		}
		else
			A = A->next;
	}
	return (NULL);
}
