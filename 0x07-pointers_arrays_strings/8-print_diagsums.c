#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *
 * @a: input
 * @size: input
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int som1 = 0, som2 = 0, i;

	for (i = 0; i < size; i++)
	{
		som1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		som2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", som1, som2);
}
