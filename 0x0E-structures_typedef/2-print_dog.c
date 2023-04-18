#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to struct dog
 *
 * Description: longer description
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("name: (nil)\n");
		if (d->owner == NULL)
			printf("owner: (nil)\n");
	}
	printf("name: %s\n, age: %f\n, owner: %s\n", d->name, d->age, d->owner);
}
