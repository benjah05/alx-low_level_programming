#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	return (alloc);
}
