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

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
