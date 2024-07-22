#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a dog
 * @d: pointer to dog_t structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
