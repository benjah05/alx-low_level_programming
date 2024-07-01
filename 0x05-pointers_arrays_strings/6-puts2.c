#include "main.h"
#include<string.h>
/**
 * puts2 - print every other character of a string
 * @str: the string to print
 * Return: void
 */
void puts2(char *str)
{
	unsigned int i, size = strlen(str);

	for (i = 0; i < size; i += 2)
		printf("%c", str[i]);
	printf("\n");
}
