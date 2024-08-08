#include "main.h"
/**
 * print_bin - recursive function used to find
 * binary representation of an unsigned long integer
 * @n: the integer
 * Return: void
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
/**
 * print_binary - print the binary representaion of a number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_bin(n);
}
