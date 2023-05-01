#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer of the listint_t to be free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	litsint_t *A;

	for (A = head, head != NULL; head = A)
	{
		A = head->next;
		free(head);
	}
}
