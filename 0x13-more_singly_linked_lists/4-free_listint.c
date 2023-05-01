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

	while (head != NULL)
	{
		A = head->next;
		free(head);
		head = A;
	}
}
