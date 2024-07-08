#include "main.h"
#include <string.h>
/**
 * _strpbrk - search for any set of bytes
 * @s: string
 * @accept: string to search for
 * Return: pointer to first occurence of the character
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
