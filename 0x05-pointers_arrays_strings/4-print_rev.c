#include "main.h"
#include<string.h>
/**
 * print_rev - print a string in reverse
 * @s: pointter to the string
 * Return: void
 */
void print_rev(char *s)
{
	char str[100];
	int i, j, size;

	size = strlen(s);
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		str[i] = s[j];
	str[size] = '\0';
	printf("%s\n", str);
}
