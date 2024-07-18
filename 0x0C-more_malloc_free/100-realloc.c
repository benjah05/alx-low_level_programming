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
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		return (ptr);
	for (i = 0; i < new_size; i++)
		*((char *)ptr + i) = 0;
	if (new_size < old_size)
		return (NULL);
	return (ptr);
}
