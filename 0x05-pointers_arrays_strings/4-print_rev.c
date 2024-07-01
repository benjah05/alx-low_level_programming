#include "main.h"
#include<string.h>
/**
 * print_rev - print a string in reverse
 * @s: pointter to the string
 * Return: void
 */
void print_rev(char *s)
{
	int i, size = strlen(s);
	
	for (i = size - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");

}
