#include "main.h"
/**
 * *_strncpy -  function that copies a string
 *
 * @n: input value
 * @dest: string
 * @src: string
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
