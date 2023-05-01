#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 *
 * @h: head node of listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t A = 0;

	for (; h != NULL; h = h->next)
	{
		A++;
	}
	return (A);
}
