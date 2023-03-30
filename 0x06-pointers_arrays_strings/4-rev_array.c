#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: array
 * @n: number of element of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, e;

	for (i = 0; i < n--; i++)
	{
		e = a[i];
		a[i] = a[n];
		a[n] = e;
	}
}
