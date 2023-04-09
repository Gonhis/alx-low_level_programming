#include <unistd.h>
/**
 * _putchar : write the character c 
 *
 * @c: the character to input
 *
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
