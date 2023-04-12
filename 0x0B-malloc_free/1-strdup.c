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
	unsigned int i, size;

	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (size = 0; size < i ; size++)
	{
		p[size] = str[size];
	}
	p[i] = '\0';
	return (p);
}
