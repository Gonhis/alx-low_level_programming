#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - function that adds a new node at the end of a
 * listint_t list
 *
 * @head: pointer to the first new node
 * @n: data for new node
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NN;

	listint_t *A = *head;

	NN = malloc(sizeof(listint_t));
	if (!NN)
	{
		return (NULL);
	}

	NN->n = n;
	NN->next = NULL;

	if (*head == NULL)
	{
		*head = NN;
		return (NN);
	}

	while (A->next != NULL)
	{
		A = A->next;
	}

	A->next = NN;

	return (NN);
}
