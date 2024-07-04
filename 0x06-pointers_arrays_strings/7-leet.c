#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * leet - encode string into 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	char alpha[] = "aeotlAEOTL";
	char num[] = "4307143071";
	size_t i, j;

	for (i = 0; i < strlen(str); i ++)
	{
		for (j = 0; j < strlen(alpha); j++)
		{
			if (str[i] == alpha[j])
				str[i] = num[j];
		}
	}
	return (str);
}
