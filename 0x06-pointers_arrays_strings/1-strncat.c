#include "main.h"
/**
 * *_strncat -  concatenates two strings
 *
 * @n: input
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}
