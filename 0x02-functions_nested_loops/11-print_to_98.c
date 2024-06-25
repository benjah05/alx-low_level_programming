#include "main.h"
/**
 * print_to_98 - print numbers 0 through 98
 * @n: parameter n of int type
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 || i >= 98; i++)
	{
		if (i == n)
			print_to_98(i);
		_putchar('0' + i);
		_putchar(',');
		_putchar(' ');

		if (n > 98)
			i--;
	}
}
