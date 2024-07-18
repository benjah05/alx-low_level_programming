#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: smallest number of the array
 * @max: largest number of the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, n, *numArray, arrayLen;

	if (min > max)
		return (NULL);
	arrayLen = (max - min) + 1;
	numArray = malloc(arrayLen * sizeof(int));
	if (numArray == NULL)
		return (NULL);
	for (i = 0, n = min; n <= max; i++, n++)
		numArray[i] = n;
	return (numArray);
}
