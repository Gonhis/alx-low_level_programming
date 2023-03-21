#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input number of the last digit
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int S;

	S = n % 10;
	if (S < 0)
	{
		_putchar(-S + 48);
		return (-S);
	}
	else
	{
		_putchar(S + 48);
		return (S);
	}
	_putchar('\n');
	return (n);
}
