#include "main.h"
#include<string.h>
/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: length of string s
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
