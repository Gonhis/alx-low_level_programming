#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: half of input
 */
void puts_half(char *str)
{
	int length = 0;

	int i, e;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	e = length / 2;
	if ((length % 2) == 1)
	{
		e = ((length + 1) / 2);
	}
	for (i = e; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
