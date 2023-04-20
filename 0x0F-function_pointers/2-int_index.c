#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 *
 * @array: array of elemnent
 * @size: size of array
 * @cmp: fuction pointer
 *
 * Return: the index of the first element or 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
