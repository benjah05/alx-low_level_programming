#include "main.h"
#include <string.h>
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string to look for
 * Return: pointer to first occurence of needle
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; i < strlen(needle); i++)
	{
		for (j = 0; j < strlen(haystack); j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (NULL);
}
