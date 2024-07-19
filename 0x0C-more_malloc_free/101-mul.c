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
		putchar(c[i]);
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
 * mul - multiply 2 positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: pointer to the product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
	long int i, j, a = 0, z, len1 = 0, len2 = 0, maxLen, overflow;
	char *product, temp;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;
	maxLen = len1 + len2;
	product = malloc((maxLen + 1) * sizeof(char));
	if (product == NULL)
		_printerr();
	for (i = 0; i <= maxLen; i++)
		product[i] = '0';
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			product[i + j] += (num1[len1 - 1 - i] - '0') * (num2[len2 - 1 - j] - '0');
			overflow = product[i + j] - '0';
			product[i + j] = (overflow % 10) + '0';
			product[i + j + 1] += overflow / 10;
		}
	}
	for (i = maxLen; i >= 0; i--)
	{
		if (product[i] != '\0')
			break;
	}
	product[i + 1] = '\0';
	for (a = 0, z = i; a < z; a++, z--)
	{
		temp = product[a];
		product[a] = product[z];
		product[z] = temp;
	}
	a = 0;
	while (product[a] == '0' && a < i)
		a++;
	for (j = 0; j <= i; j++)
		product[j] = product[j + a];
	return (product);
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
	_printchar(mul(argv[1], argv[2]));
	_printchar("\n");
	return (0);
}
