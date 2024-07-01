#include "main.h"
#include<string.h>
/**
 * rev_string - print a string in reverse
 * @s: pointter to the string
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i, j, size;

	size = strlen(s);
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
