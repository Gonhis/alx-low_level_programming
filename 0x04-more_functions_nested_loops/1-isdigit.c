#include "main.h"
/**
 * _isdigit -  checks for a digit
 *
 * @c: input digit
 *
 * Return: 1 c is digit. 0 the rest.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

