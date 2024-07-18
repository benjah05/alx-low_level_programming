#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatenate to s1
 * Return: the concatenated string, NULL if there is any failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int i, j, k, len_s1 = 0, len_s2 = 0, len_s1s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	len_s1s2 = len_s1 + n + 1; /* + 1 for the null terminator*/
	s1s2 = malloc(len_s1s2);
	if (s1s2 == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		s1s2[i] = s1[i];
	for (j = i, k = 0; j < len_s1s2 && k < n; j++, k++)
		s1s2[j] = s2[k];
	s1s2[j] = '\0';
	return (s1s2);
}
