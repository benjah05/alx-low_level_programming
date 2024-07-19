#include "main.h"
#include <stdlib.h>
/**
 * _printchar - print string
 * @c: string to print
 * Return: void
 */
void _printchar(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
}
/**
 * _printerr - print error message
 * Return: 98
 */
int _printerr(void)
{
	char err[] = "Error\n";

	_printchar(err);
	exit(98);
}
/**
 * mul - find and print the product of 2 positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: 0
 */
int *mul(char *num1, char *num2)
{
	int i, j, *n1, *n2, *product, len1 = 0, len2 = 0, maxLen, overflow;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;
	maxLen = len1 + len2;
	n1 = malloc(len1 * sizeof(int));
	n2 = malloc(len2 * sizeof(int));
	product = malloc(maxLen * sizeof(int));
	if (product == NULL || n1 == NULL || n2 == NULL)
		_printerr();
	for (i = len1 - 1, j = 0; i >= 0; i--, j++)
		n1[j] = num1[i] - '0';
	for (i = len2 - 1, j = 0; i >= 0; i--, j++)
		n2[j] = num2[i] - '0';
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
			product[i + j] += n2[i] * n1[j];
	}
	for (i = 0; i < maxLen; i++)
	{
		overflow = product[i] / 10;
		product[i] = product[i] % 10;
		product[i + 1] = product[i + 1] + overflow;
	}
	for (i = maxLen; i >= 0; i--)
	{
		if (product[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		printf("%d", product[i]);
	free(n1);
	free(n2);
	free(product);
	return (0);
}
/**
 * main - Get 2 positive numbers to be multiplied
 * @argc: number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i, j, num;

	if (argc != 3)
		_printerr();
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			num = argv[i][j];
			if (!(num >= '0' && num <= '9'))
				_printerr();
		}
	}
	mul(argv[1], argv[2]);
	_printchar("\n");
	return (0);
}
