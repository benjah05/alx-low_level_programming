#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all command line arguments
 * @ac: number of CL arguments
 * @av: array of the CL arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j, k = 0, newStr_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			newStr_len++;
		newStr_len++; /* for \n after each argument */
	}
	newStr_len++; /* for null terminator */
	newStr = malloc(newStr_len);
	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}
	newStr[k] = '\0';
	return (newStr);
}
