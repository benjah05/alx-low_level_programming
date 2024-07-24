#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer in an array
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp doesn't
 * return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}

	}
	return (-1);
}
