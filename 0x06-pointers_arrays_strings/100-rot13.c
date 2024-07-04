#include "main.h"
#include "string.h"
/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	size_t i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWZABCDEFGHIJKLM";

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(alpha); j++)
		{
			if (s[i] == alpha[j])
				s[i] = rot_alpha[j];
			break;
		}
	}
	return (s);
}
