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
	listint_t *NN, *A;

	NN = malloc(sizeof(listint_t));
	if (!NN)
	{
		return (NULL);
	}
	NN->n = n;
	NN->next = *head;
	if (*head == NULL)
	{
		*head = NN;
		return (NN);
	}
	*A = *head;
	while (A->next != NULL)
	{
		A = A->next;
	}
	a->next = NN;
	return (NN);
}
