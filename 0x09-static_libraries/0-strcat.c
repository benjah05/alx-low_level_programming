#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest; concatenated string
 */
char *_strcat(char *dest, char *src)
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
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
