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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
