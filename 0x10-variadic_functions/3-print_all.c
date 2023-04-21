#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	char *st, *sp = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(all, double));
					break;
				case 's':
					st = va_arg(all, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
