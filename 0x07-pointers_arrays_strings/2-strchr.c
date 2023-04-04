#include "main.h"
/**
 * *_strchr -  locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i, e;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (e = 0; e < i; e++)
		{
			if (s[e] == c)
			{
				return (s + e);
			}
		}
		return (NULL);
	}
}
