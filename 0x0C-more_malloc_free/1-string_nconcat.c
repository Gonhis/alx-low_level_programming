#include "main.h"
#include <stdlib.h>
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

	unsigned int i, s1_len, s2_len;

	if (s1 == NULL)
	{
		s1_len = 0;
	}
	else
	{
		for (s1_len = 0; s1[s1_len] != '\0'; ++s1_len)
			;
	}
	if (s2 == NULL)
	{
		s2_len = 0;
	}
	else
	{
		for (s2_len = 0; s2[s2_len] != '\0'; ++s2_len)
			;
	}
	if (s2_len > n)
		s2_len = n;
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
		p[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		p[i + s1_len] = s2[i];
	p[s1_len + s2_len] = '\0';
	return (p);
}
