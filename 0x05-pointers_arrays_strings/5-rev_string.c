#include "main.h"
#include<string.h>
/**
 * rev_string - print a string in reverse
 * @s: pointter to the string
 * Return: void
 */
void rev_string(char *s)
{
	char str[10];
	int i, j, size;

	size = strlen(s);
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		str[i] = s[j];
	str[size] = '\0';
	for (i = 0, j = 0; i < size && j < size; i++, j++)
		s[i] = str[j];
	s[size] = '\0';
}
