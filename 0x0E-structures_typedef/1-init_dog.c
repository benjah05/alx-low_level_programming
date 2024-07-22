#include "dog.h"
/**
 * init_dog - initialize variables of type struct dog
 * @d: object of struct dog
 * @name: dog name
 * @age: (float) dog age
 * @owner: the dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
