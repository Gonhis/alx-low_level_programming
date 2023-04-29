#include "main.h"
/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int B, index;

	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	B = atoi(argv[1]);

	if (B < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (index = 0; index < B; index++)
	{
		if (index == B - 1)
		{
			printf("%02hhx\n", str[index]);
			break;
		}
		printf("%02hhx ", str[index]);
	}
	return (0);
}
