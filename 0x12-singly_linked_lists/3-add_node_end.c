#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: double pointer to the list_t
 * @str: new string
 *
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	list_t *T = *head;

	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (T->next)
	{
		T = T->next;
	}
	T->next = new_node;
	return (new_node);
}
