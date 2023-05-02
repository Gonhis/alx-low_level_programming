#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: pointer to listint_t to be sum
 *
 * Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	listint_t *A;

	for (A = head; A != NULL; A = A->next)
	{
		s += A->n;
	}
	return (s);
}
