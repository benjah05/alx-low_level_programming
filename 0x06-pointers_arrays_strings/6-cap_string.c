#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalize all words of a string
 * @str: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j, str_size;
	char separators[14] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125 };

	str_size = strlen(str);
	for (i = 0; i < str_size; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (separators[j] == (int) str[i])
			{
				if (i + 1 < str_size && islower(str[i + 1]))
				{
					str[i + 1] = (char) ((int) str[i + 1] - 32);
				}
				break;
			}
		}
	}
	return (str);
}
