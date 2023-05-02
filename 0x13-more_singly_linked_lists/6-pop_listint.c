#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list
 *
 * @head: pointer to pointed listint_t to be removed
 *
 * Return: head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *A;

	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	A = (*head)->next;
	free(*head);
	*head = A;
	return (data);
}
