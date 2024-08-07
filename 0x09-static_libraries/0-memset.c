#include "main.h"
#include <string.h>
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first n bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
