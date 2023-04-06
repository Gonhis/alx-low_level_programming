#include "main.h"
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
		return (nat_squ_ro(n, 0));
	}
}
/**
 * nat_squ_ro - checks the natural squarte root
 *
 * @n: input number
 * @i: squarte numb
 *
 * Return: natural squarte root number or -1 error
 */
int nat_squ_ro(int n, int i)
{
	if (i * i == n)
	{
		return (n);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (nat_squ_ro(n, i + 1));
	}
}
