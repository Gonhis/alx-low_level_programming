#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: pointer one
 * @s2: pointer two
 *
 * Return: s1 followed by s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	unsigned int i, e, j, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (s2[e] != '\0')
	{
		e++;
	}
	j = i + e;
	p = malloc((j * sizeof(char)) + 1);

	if (p == NULL)
		return (NULL);

	a = 0;
	while (a < i)
	{
		p[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= j)
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	return (p);
}
