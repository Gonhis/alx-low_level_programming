#include "main.h"
/**
* binary_to_uint - function that converts a binary number to an unsigned int
*
* @b: pointing to a string of 0 and 1 chars
*
* Return: the converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int index = 0;

	unsigned int D = 0;

	if (!b)
	{
		return (0);
	}
	while (b[index])
	{
		if (b[index] < '0' || b[index] > '1')
		{
			return (0);
		}
		D = 2 * D + (b[index] - '0');
		index++;
	}
	return (D);
}
