#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index
*
* @n: pointer to the number to change
* @index: index of the bit you want to set
*
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
