#include "main.h"
/**
* get_bit - function that returns the value of a bit at a given index
*
* @n: number to search
* @index: index of the bit you want to get
*
* Return: value of the bit or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int BV;

	if (index > 63)
	{
		return (-1);
	}
	BV = (n >> index) & 1;
	return (BV);
}
