#include "main.h"
#include "string.h"
/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;
	size_t j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; strlen(alpha[j]); j++)
		{
			if (s[i] == alpha[j])
				s[i] = rot_alpha[j];
			break;
		}
	}
	return (s);
}
