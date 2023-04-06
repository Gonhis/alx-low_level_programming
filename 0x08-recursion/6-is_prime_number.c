#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number -  input integer is a prime number
 *
 * @n: number to evaluate
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number - find the prime number
 *
 * @n: number to evaluate
 * @i: possible factor of the number
 *
 * Return: 1 or 0
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, i - 1));
}
