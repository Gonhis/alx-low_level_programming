#include "main.h"
/**
 * print_sign - cheks the sign of number
 *
 * @n: enter number
 *
 * Return: 1 greater than zero. 0 is zero. '-1' less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
	return (n);
}
