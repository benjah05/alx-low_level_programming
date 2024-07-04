#include "main.h"
#include "string.h"
/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	size_t j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < strlen(alpha); j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot_alpha[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
