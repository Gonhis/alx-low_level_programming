#include "main.h"
#include <stdlib.h>
/**
 * string_lenght - function that write string lenght
 *
 * @string: string
 *
 * Return: string lenght
 */
int string_lenght(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: n bytes of s2
 *
 * Return: pointer to concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	int l, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	if (n >= string_lenght(s2))
		n = string_lenght(s2);

	l = string_lenght(s1) + n + 1;
	p = malloc(sizeof(*p) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
