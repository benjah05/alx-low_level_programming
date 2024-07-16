#include "main.h"
#include <stdlib.h>
/**
 * _strdup - find pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string given as a parameter
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	s = malloc(len);
	for (i = 0; i < len; i++)
		*(s + i) = *(str + i);
	return (s);
}
