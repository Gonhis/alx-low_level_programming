#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char lc;

	lc = 'a';
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
	return (0);
}
