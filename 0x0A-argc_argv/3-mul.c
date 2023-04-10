#include <stdio.h>
/**
 * main - multiplies two numbers
 *
 * @argc: integer
 * @argv: pointer to an array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, mult;

	printf("%d\n", argc);
	if (argc > 1 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			mult = mult * atoi(argv[i]);
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


