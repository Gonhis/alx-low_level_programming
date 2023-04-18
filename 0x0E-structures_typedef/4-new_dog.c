#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  function that creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, ln, lo;

	struct dog *n_dog = NULL;

	ln = 0;
	while (name[ln] != '\0')
		ln++;
	lo = 0;
	while (owner[lo] != '\0')
		lo++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(ln + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lo + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= ln; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lo; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
