#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of argument to be summed
 *
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list SM;

	if (n == 0)
		return (0);
	va_start(SM, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(SM, int);
	}
	va_end(SM);
	return (sum);
}
