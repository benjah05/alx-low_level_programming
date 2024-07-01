#include "main.h"
#include<string.h>
/**
 * puts_half - print half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	unsigned int i, n, length_of_the_string;

	length_of_the_string = strlen(str);
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
		n = length_of_the_string / 2;
	for (i = n; i < length_of_the_string; i++)
		printf("%c", str[i]);
	printf("\n");
}
