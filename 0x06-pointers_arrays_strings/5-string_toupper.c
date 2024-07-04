#include "main.h"
#include <string.h>
/**
 * string_toupper - change all lowercase to uppercase
 * @str: lowercase characters
 * Return: uppercase characters
 */
char *string_toupper(char *str)
{
	int i, str_size;

	str_size = strlen(str);
	for (i = 0; i < str_size; i++)
	{
		if ((int) str[i] >= 97 && (int) str[i] <= 122)
			str[i] = (char) ((int) str[i] - 32);
	}
	return (str);
}
