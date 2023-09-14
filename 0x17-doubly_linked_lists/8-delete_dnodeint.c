#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 *
 * @head: double pointer to head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c;

	dlistint_t *head1;
	dlistint_t *head2;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	c = 0;

	while (head1 != NULL)
	{
		if (c == index)
		{
			if (c == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		c++;
	}
	return (-1);
}
