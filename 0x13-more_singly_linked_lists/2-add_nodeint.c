#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning of a
 * listint_t list
 *
 * @head: pointer to the first node at lists
 * @n: data for the new node
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NN;

	NN = malloc(sizeof(listint_t));
	if (!NN)
	{
		return (NULL);
	}
	NN->n = n;
	NN->next = *head;
	*head = NN;

	return (NN);
}
