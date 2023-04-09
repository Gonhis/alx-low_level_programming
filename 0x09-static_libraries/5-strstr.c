#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *e = needle;

		while (*i == *e && *e != '\0')
		{
			i++;
			e++;
		}
		if (*e == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
