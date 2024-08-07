#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer object to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char nil[] = "(nil)";

	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("%s\n", nil);
	else
		printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("%s\n", nil);
	else
		printf("%s\n", d->owner);
}
