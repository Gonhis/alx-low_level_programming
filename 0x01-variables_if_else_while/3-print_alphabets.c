#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int al, up;

	al = 'a';
	up = 'A';
	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (up = 'A'; up <= 'Z', up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
