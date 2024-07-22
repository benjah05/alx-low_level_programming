#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 * Return: void or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(name) + 1);
	dog->age = age;
	dog->owner = malloc(sizeof(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	return (dog);
}
