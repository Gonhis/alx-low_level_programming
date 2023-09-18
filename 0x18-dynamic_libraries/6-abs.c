#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the output of integer
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n >= 0)
	{
		return (n);
	}
	_putchar('\n');
	return (n);
}
