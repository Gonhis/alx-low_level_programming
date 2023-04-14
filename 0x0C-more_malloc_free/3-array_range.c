#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 *
 * @min: minimum value of integer
 * @max: maximum value of integer
 *
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int R, i;

	int *p;

	R = 0;
	if (min > max)
		return (NULL);

	R = ((max + 1) - min);
	p = malloc(R * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < R; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
