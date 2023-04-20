#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 *
 * @name: pointer to name
 * @f: function pointer
 *
 * Return: empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
