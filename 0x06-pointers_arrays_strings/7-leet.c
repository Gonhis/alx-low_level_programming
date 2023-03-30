#include "main.h"
/**
 * *leet -  encodes a string into 1337
 *
 * @hb: string
 *
 * Return: hb
 */
char *leet(char *hb)
{
	int i, e;

	char c1[] = "aAeEoOtTlL";

	char c2[] = "4433007711";

	for (i = 0; hb[i] != '\0'; i++)
	{
		for (e = 0; e < 10; e++)
		{
			if (hb[i] == c1[e])
			{
				hb[i] = c2[e];
			}
		}
	}
	return (hb);
}
