#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
