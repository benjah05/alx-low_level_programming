#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the function we need to use
 * either print array in hex or as is
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
