#include "search_algos.h"
/**
 * linear_search - search for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: the first index of the value or -1 if else
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
