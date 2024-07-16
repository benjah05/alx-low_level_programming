#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concantenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	unsigned int i = 0, j = 0, k, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
		len_s1++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
		len_s2++;
	}
	s1s2 = malloc(len_s1 + len_s2 + 1);
	if (s1s2 == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		*(s1s2 + i) = *(s1 + i);
	for (j = i, k = 0; j <= len_s1 + len_s2; j++, k++)
		*(s1s2 + j) = *(s2 + k);
	s1s2[j + 1] = '\0';
	return (s1s2);
}
