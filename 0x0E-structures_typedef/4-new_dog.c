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
	int i = 0, j = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	while (name[i] != 0)
		i++;
	while (owner[j] != 0)
		j++;
	dog->name = malloc(i + 1);
	dog->owner = malloc(j + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name), free(dog->owner), free(dog);
		return (NULL);
	}
	dog->age = age;
	for (i = 0; name[i] != 0; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (j = 0; owner[j] != 0; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';
	return (dog);
}
