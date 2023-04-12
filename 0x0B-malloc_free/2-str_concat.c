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

	int i, e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		for (e = 0; s2[e] != '\0'; e++)
			p = malloc((i + e) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (e = 0; s2[e] != '\0'; e++)
	{
		p[i] = s2[e];
		i++;
	}
	p[i] = '\0';
	return (p);
}
