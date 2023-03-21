#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	char lc;

	i = 1;
	lc = 'a';
	for (i = 1; i <= 10; i++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
