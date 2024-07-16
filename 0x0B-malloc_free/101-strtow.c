#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - split a string into words
 * @str: the string to split
 * Return: pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **words;
	unsigned int i, j, k, len = 0, word_count = 0, word = 0, word_len = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && !word)
		{
			word_count++;
			word = 1;
		}
		else if (str[i] == ' ')
			word = 0;
	}
	words = malloc(sizeof(char *) * word_count + 1);
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;
		word_len = 0;
		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;
		words[i] = malloc(sizeof(char) * word_len + 1);
		if (words[i] == NULL)
			return (NULL);
		for (j = 0; j < word_len; j++)
			words[i][j] = str[k + j];
		words[i][word_len] = '\0';
		k += word_len;
	}
	words[word_count] = '\0';
	return (words);
}
