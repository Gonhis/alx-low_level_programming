#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all arguments my program
 *
 * @ac: int input
 * @av: double pointer
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, m, b = 0, a = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			a++;
	}
	a += ac;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		str[b] = av[j][m];
		b++;
	}
	if (str[b] == '\0')
	{
		str[b++] = '\n';
	}
	}
	return (str);
}
