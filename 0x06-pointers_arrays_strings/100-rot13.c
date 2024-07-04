#include "main.h"
#include "string.h"
/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			s[i] = (char) (s[i] + 13);
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			s[i] = (char) (s[i] - 13);
	}
	return (s);
}
