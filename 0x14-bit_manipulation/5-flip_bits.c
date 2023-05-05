#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 63, C = 0;

	unsigned long int ism;

	unsigned long int XOR_op = n ^ m;

	while (index >= 0)
	{
		ism = XOR_op >> index;
		if (ism & 1)
		{
			C++;
		}
		index--;
	}
	return (C);
}
