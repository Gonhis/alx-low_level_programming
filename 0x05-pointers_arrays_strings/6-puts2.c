#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 *
 * Return: no return
 */
void puts2(char *str)
{
	int length = 0;

	int e = 0;

	char *y = str;

	int i;

	while (*y != '\0')
	{
		length++;
		y++;
	}
	e = length - 1;
	for (i = 0; i <= e; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
