#include "main.h"

int new_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (new_sqrt_recursion(n, 0));
	}
}
/**
 * new_sqrt_recursion - checks the natural squarte root
 *
 * @n: input number
 * @i: squarte numb
 *
 * Return: natural squarte root number or -1 error
 */
int new_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (new_sqrt_recursion(n, i + 1));
}
