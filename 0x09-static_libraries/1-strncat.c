#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: at most bytes from src to concatenate to dest
 * Return: dest; concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, size_dest = 0, size_src = 0;

	while (dest[i] != '\0')
	{
		size_dest++;
		i++;
	}
	while (src[j] != '\0')
	{
		size_src++;
		j++;
	}
	for (i = size_dest, j = 0; i < size_dest + size_src; i++, j++)
	{
		dest[i] = src[j];
		if (i == size_dest + n)
			break;
	}
	dest[i] = '\0';
	return (dest);
}
