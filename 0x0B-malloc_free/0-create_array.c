#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to an array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		while (size--)
		{
			p[size] = c;
		}
	}
	return (*p);
}
