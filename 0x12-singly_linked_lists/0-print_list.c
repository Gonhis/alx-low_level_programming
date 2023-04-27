#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
