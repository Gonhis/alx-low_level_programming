#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	char la;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
