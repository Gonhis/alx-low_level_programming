#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: input number
 *
 * Return: -1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}