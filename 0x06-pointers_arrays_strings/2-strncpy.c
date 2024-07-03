#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string
 * @dest: where to be copied
 * @src: string to copy
 * @n: bytes to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, size_dest;

	size_dest = strlen(dest);
	for (i = 0, j = 0; i < size_dest + 1 ; i++, j++)
	{
		dest[i] = src[j];
		if (i == n - 1 || src[i] == '\0')
			break;
	}
	if (dest[size_dest] != '\0')
		dest[size_dest] = '\0';
	return (dest);
}
