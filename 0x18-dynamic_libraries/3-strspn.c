#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * _strspn - length of a prefix of a substring
 * @s: first string
 * @accept: second string
 * Return: number of bytes in s that are also in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; i < strlen(accept); i++)
	{
		for (j = 0; j < strlen(s); j++)
		{
			if (accept[i] == s[j])
				len += 1;
			if (!(isalpha(s[j])))
				break;
		}
	}
	return (len);
}
