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
		if (c >= 'A' && c <= 'Z')
		{
			_putchar(c);
			return (1);
		}
		else if (c >= 'a' && c <= 'z')
		{
			return (0);
		}
	}
	_putchar('\n');
}
