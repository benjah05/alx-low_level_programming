#include "main.h"
/**
 * print_number - print an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i < 10)
		_putchar('0' + i);
	else
	{
		print_number(i / 10);
		_putchar('0' + (i % 10));
	}

}
