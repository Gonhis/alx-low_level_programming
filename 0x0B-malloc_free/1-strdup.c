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

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
		p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[size] = '\0';
	return (p);
}
