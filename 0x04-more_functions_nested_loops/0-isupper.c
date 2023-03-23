#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: input character
 *
 * Return: 1 c uppercase. 0 the rest.
 */
int _isupper(int c)
{
	c = 'A';
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}
