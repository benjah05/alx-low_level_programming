#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: where to be copied
 * @src: string to copy
 * @n: bytes to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, size_dest = 0;

	while (dest[i] != '\0')
	{
		size_dest++;
		i++;
	}
	for (i = 0, j = 0; i < size_dest; i++, j++)
	{
		dest[i] = src[j];
		if (i == n)
			break;
	}
	return (dest);
}
