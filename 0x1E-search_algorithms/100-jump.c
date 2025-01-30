#include <math.h>
#include "search_algos.h"
/**
 * jump_search - search for a value in a sorted array using jump search
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the index of the value or -1 if else
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, curr_index = 0, linear_index;

	if (!array || size == 0)
		return (-1);
	while (step = sqrt(size); curr_index < size; curr_index += step)
	{
		if (*(array + curr_index) >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", curr_index, *(array + curr_index));
	}
	printf("Value found between indexes [%lu] and [%lu]\n", curr_index - step, curr_index);
	for (linear_index = curr_index - step; linear_index < size && linear_index <= curr_index; linear_index++)
	{
		printf("Value checked array[%lu] = [%d]\n", linear_index, *(array + linear_index));
		if (*(array + linear_index) == value)
			return (linear_index);
	}
	return (-1);
}
