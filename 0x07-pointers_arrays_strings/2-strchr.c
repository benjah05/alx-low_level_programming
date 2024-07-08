#include "main.h"
#include <string.h>
/**
 * _strchr - locate a character in string
 * @s: string
 * @c: character to be located
 * Return: pointer to first occurence of the character
 * or NULL if it's not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
