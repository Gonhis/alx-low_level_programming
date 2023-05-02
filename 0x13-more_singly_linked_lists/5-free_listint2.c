#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list
 *
 * @head: pointer to pointer of listint_t to be free
 *
 * Return: empty
 */
void free_listint2(listint_t **head)
{
	listint_t *A;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		A = (*head)->next;
		free(*head);
		*head = A;
	}
	*head = NULL;
}
