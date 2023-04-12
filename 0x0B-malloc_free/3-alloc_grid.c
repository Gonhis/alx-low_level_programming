#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: number of element in array
 * @height: number of element in array
 *
 * Return: to pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, e, j, f;

	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (e = 0; e <= i; e++)
				{
					free(p[e]);
				}
				free(p);
				return (NULL);
			}
		}
		for (j = 0; j < height; j++)
		{
			for (f = 0; f < width; f++)
			{
				p[j][f] = 0;
			}
		}
		return (p);
	}
}
