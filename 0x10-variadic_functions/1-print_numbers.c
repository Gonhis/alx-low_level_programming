#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between number
 * @n: number of interger
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nb;
	unsigned int i;

	va_start(nb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nb, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nb);
}

