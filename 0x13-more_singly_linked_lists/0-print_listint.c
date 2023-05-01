#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: head node of listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t A = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		A++;
	}
	return (A);
}
