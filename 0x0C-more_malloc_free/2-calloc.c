#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory of an array using malloc
 * @nmemb: number of elements of the array
 * @size: bytes of each array element
 * Return: array allocated using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * sizeof(nmemb));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size * sizeof(nmemb); i++)
		*((char *)arr + i)= 0;
	return (arr);
}
