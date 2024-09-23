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

	for (i = 0; i < strlen(haystack); i++)
	{
		for (j = 0; j < strlen(needle); j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == strlen(needle))
			return (&haystack[i]);
	}
	return (NULL);
}
