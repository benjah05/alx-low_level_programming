#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to look for in the array
 * Return: index of the value or -1 if else
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid, right = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", *(array + i));
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;
		if (*(array + mid) < value)
			left = mid + 1;
		else if (*(array + mid) > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
