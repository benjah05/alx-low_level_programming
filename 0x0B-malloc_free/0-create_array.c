#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: character element of array
 * Return: an array of the character c
 */
char *create_array(unsigned int size, char c)
{
	unsigned long int i = 0;
	char *charArray;

	if (size <= 0)
		return (NULL);
	charArray = malloc(size);
	if (charArray == NULL)
		return (NULL);
	while (i < size)
	{
		*(charArray + i) = c;
		i++;
	}
	return (charArray);
}
