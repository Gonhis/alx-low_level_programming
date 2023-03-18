#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	int Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ld = n % 10;
	if (Ld > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, Ld);
	}
	if (Ld < 6 && Ld != 0)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, Ld);
	}
	if (Ld == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, Ld);
	}
	return (0);
}
