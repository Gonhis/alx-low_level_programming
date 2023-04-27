#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the list_t to be free
 *
 * Return: empty
 */
void free_list(list_t *head)
{
	list_t *T;

	while (head)
	{
		T = head->next;
		free(head->str);
		free(head);
		head = T;
	}
}
