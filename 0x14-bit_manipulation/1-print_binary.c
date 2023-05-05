#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number to print in binary
 *
 * Return: empty
 */
void print_binary(unsigned long int n)
{
	int index = 63, C = 0;

	unsigned long int ism;

	while (index >= 0)
	{
		ism = n >> index;
		if (ism & 1)
		{
			_putchar('1');
			C++;
		}
		else if (C)
		{
			_putchar('0');
		}
		index--;
	}
	if (!C)
	{
		_putchar('0');
	}
}
