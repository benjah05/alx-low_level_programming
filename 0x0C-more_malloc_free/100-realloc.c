#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previous allocated
 * @old_size: previous size
 * @new_size: size of the new memory block
 * Return: pointer to memory with new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (new_size > old_size)
		return (newPtr);
	for (i = 0; i < new_size; i++)
		*((char *)newPtr + i) = 0;
	free(ptr);
	return (newPtr);
}
