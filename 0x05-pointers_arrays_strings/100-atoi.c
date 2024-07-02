#include "main.h"
#include<string.h>
#include<ctype.h>
#include<limits.h>
/**
 * _atoi - convert string to an integer
 * @s: string to be converted
 * Return: integer resulting form the conversion
 */
int _atoi(char *s)
{
	int i = 0, num = 0, found_digit = 0;
	int signs = 1, size = strlen(s);
	int m;

	m  = INT_MAX / 10;
	while (isspace(s[i]) || !isdigit(s[i]) || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signs *= -1;
		i++;
	}
	for (; i < size; i++)
	{
		if (isdigit(s[i]))
		{
			found_digit = 1;
			if (num > m || (num == m && (s[i] - '0') > INT_MAX % 10))
				return (signs == 1 ? INT_MAX : INT_MIN);
			num = num * 10 + (s[i] - '0');
		}
		else
			break;
	}
	if (!found_digit)
		return (0);
	return (signs * num);
}
