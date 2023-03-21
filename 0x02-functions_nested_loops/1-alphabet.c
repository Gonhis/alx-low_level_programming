#include "main.h"
/**
 * print_alphabet - Entry point
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
}
