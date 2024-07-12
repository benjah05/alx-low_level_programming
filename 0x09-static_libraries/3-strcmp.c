#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 == s2, +ve int if s1 > s2, -ve int if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, size_s1, result;

	size_s1 = strlen(s1);
	for (i = 0, j = 0; i < size_s1; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			result = s1[i] - s2[j];
			break;
		}
		else
			result = 0;
	}
	return (result);
}
