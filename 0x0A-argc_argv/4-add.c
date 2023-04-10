#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: integer
 * @argv: pointer to an array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	char *n;

	while (--argc)
	{
		for (n = argv[argc]; *n; n++)
		{
			if (n < '0' || n > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[argc]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
