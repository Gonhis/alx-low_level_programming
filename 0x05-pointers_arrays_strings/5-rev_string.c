#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string input
 *
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];

	int baby = 0;

	int i;

	while (s[baby] != '\0')
	{
		baby++;
	}
	for (i = 0; i < baby; i++)
	{
		baby--;
		rev = s[i];
		s[i] = s[baby];
		s[baby] = rev;
	}
}
