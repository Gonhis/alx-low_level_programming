#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char al;

	al = 'a';
	for (al = 'a'; al <= 'z' && al != "'q' 'e'"; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
