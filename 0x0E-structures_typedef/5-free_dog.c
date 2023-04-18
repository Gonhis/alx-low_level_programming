#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 *
 * @d: pointer to struct dog
 *
 * Return: empty
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
