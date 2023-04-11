#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;

	char *p;

	if (str == 0)
		return (0);
	for (; str[size] != '\0'; size++)
	{
		p = malloc(size * sizeof(*str) + 1);
	}
	if (p == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
